/*
 * format - haXe File Formats
 *
 * Copyright (c) 2008, The haXe Project Contributors
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   - Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   - Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE HAXE PROJECT CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE HAXE PROJECT CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */
package format.glsl;
import format.hxsl.Data;

class Compiler {

	private var buf:StringBuf;
	private var indent:String;
	private var inVertex:Bool;
	
	public function new() 
	{
		this.indent = "\t";
	}
	
	private function newline()
	{
		buf.add("\n");
		buf.add(indent);
	}
	
	private function startBlock()
	{
		buf.add("{\n");
		buf.add(indent += "\t");
	}
	
	private function endBlock()
	{
		indent = indent.substr(1);
		buf.add("\n");
		buf.add(indent);
		buf.add("}");
		
		newline();
	}

	public dynamic function error(msg:String, p) : Dynamic {
		throw new Error(msg, p);
		return null;
	}

	public dynamic function warn( msg:String, p:Position) {
	}

	public function generate( data : format.hxsl.Data ) : format.glsl.Data 
	{
		/*return {
			vertex:
			'
    attribute vec3 aVertexPosition;
    attribute vec4 aVertexColor;

    uniform mat4 uMVMatrix;
    uniform mat4 uPMatrix;

    varying vec4 vColor;

    void main(void) {
        gl_Position = uPMatrix * uMVMatrix * vec4(aVertexPosition, 1.0);
        vColor = aVertexColor;
    }
			',
			fragment:
			'
    #ifdef GL_ES
    precision highp float;
    #endif

    varying vec4 vColor;

    void main(void) {
        gl_FragColor = vColor;
    }
			'
		};*/
		
		return
		{
			vertex:genShader(data, true),
			fragment:genShader(data, false)
		}
	}
	
	function varName( v : Variable ) : String
	{
		return switch(v.kind)
		{
			case VParam, VVar, VInput, VTmp, VTexture:
				v.name;
			case VOut:
				if (inVertex) "gl_Position"; else "gl_FragColor";
		}
	}
	
	function getVaryings( data : format.hxsl.Code ) : Array<Variable>
	{
		var varyings = new Hash();
		for (e in data.exprs)
			lookVaryings(e.e, varyings);
		
		return Lambda.array(varyings);
	}
	
	function lookVaryings( c, vs:Hash<Variable> )
	{
		switch(c.d)
		{
			case CVar( v, _ ):
				switch(v.kind)
				{
					case VVar: vs.set(v.name, v);
					default:
				}
			case COp( op, e1, e2 ):
				lookVaryings(e1, vs);
				lookVaryings(e2, vs);
			case CUnop( op, e ):
				lookVaryings(e, vs);
			case CAccess( v, idx ):
				switch(v.kind)
				{
					case VVar: vs.set(v.name, v);
					default:
				}
			case CTex( v, acc, flags ):
				switch(v.kind)
				{
					case VVar: vs.set(v.name, v);
					default:
				}
			case CSwiz( e, swiz ):
				lookVaryings(e, vs);
			case CBlock( exprs, v ):
				for (e in exprs) lookVaryings(e.e, vs);
				lookVaryings(v, vs);
		}
	}
	
	function genShader( data : format.hxsl.Data, vertex : Bool)
	{
		var buf = this.buf =  new StringBuf();
		var code = (vertex) ? data.vertex : data.fragment;
		this.inVertex = vertex;
		
		if (vertex)
		{
			trace(data);
			//add uniforms
			
			for (uniform in code.args)
			{
				buf.add("\tuniform ");
				buf.add( declareVar(uniform) );
				buf.add(";\n");
			}
			
			//add attributes (input)
			for (att in data.input)
			{
				buf.add("\tattribute ");
				buf.add( declareVar(att) );
				buf.add(";\n");
			}
			
			//add varyings
			for (v in getVaryings(data.fragment))
			{
				buf.add("\tvarying ");
				buf.add( declareVar(v) );
				buf.add(";\n");
			}
		} else {
			//add precision statement
			buf.add('#ifdef GL_ES\n\tprecision highp float;\n\t#endif\n\t');
			//add varyings
			for (v in getVaryings(data.fragment))
			{
				buf.add("\tvarying ");
				buf.add( declareVar(v) );
				buf.add(";\n");
			}
		}
		
		
		genFunction("main", [], "void", code.exprs);
		return buf.toString();
	}
	
	function genFunction(funcName:String, args:Array<Variable>, retType:String, code: Array<{ v:Null<CodeValue>, e:CodeValue }> )
	{
		buf.add(retType); buf.add(" "); buf.add(funcName); buf.add("(");
		for (arg in args) buf.add(declareVar(arg));
		buf.add(")");
		newline();
		startBlock();
		for (e in code) 
		{
			
			genCode(e);
			switch(e.e.d)
			{
				case CBlock(_, _):
				default:
					buf.add(";");
			}
			newline();
		}
		endBlock();
	}
	
	function genCode(c: { v:Null<CodeValue>, e:CodeValue } )
	{
		switch(c.e.d)
		{
			case CBlock(exprs, v):
				startBlock();
				for (e in exprs) 
				{
					
					genCode(e);
					switch(e.e.d)
					{
						case CBlock(_, _):
						default:
							buf.add(";");
							newline();
					}
				}
				
				if (c.v != null)
				{
					genCode( { v:c.v, e:v } );
				}
				endBlock();
			default:
				if (c.v != null)
				{
					genCodeVal(c.v);
					buf.add(" = ");
					genCodeVal(c.e);
				}
		}
	}
	
	function bytesSize(t:VarType)
	{
		return switch(t)
		{
			case TFloat: 1;
			case TFloat2: 2;
			case TFloat3: 3;
			case TFloat4: 4;
			case TColor3: 3;
			case TColor: 4;
			case TMatrix( r, c, transpose ): switch(Std.int(Math.max(r, c)))
			{
				case 2: 4;
				case 3: 9;
				case 4: 16;
				default: throw "assert";
			}
			case TArray( t, size ): bytesSize(t) * size;
			case TTexture( cube ): throw "assert";
		}
	}
	
	function swizLength(swiz:Array<Comp>)
	{
		var max = 0.0;
		for (s in swiz)
		{
			switch(s)
			{
				case X: max = Math.max(max, 1);
				case Y: max = Math.max(max, 2);
				case Z: max = Math.max(max, 3);
				case W: max = Math.max(max, 4);
			}
		}
		
		return Std.int(max);
	}
	
	//this will only work if toSize > fromSize
	function getVecConvert(fromSize:Int, toSize:Int): { before:String, after:String }
	{
		if (toSize <= fromSize) throw "assert";
		var after = new StringBuf();
		for (i in fromSize...toSize)
		{
			switch(i)
			{
				case 3: after.add(", 1.0");
				default: after.add(", 0.0");
			}
		}
		return { before:"vec" + toSize + "(", after:after + ")" };
	}
	
	function genCodeVal(c:CodeValue)
	{
		switch(c.d)
		{
			case CVar( v, swiz ):
				if (swiz != null && swiz.length > 0)
				{
					var sLen = swizLength(swiz);
					var cLen = bytesSize(v.type);
					var convert = null;
					if (sLen > cLen)
					{
						convert = getVecConvert(cLen, sLen);
						buf.add(convert.before);
					}
					
					buf.add(varName(v));
					if (convert != null) buf.add(convert.after);
					buf.add(".");
					for (s in swiz)
					{
						buf.add(compToString(s));
					}
				} else {
					buf.add(varName(v));
				}
			case COp( op, e1, e2 ):
				switch(op)
				{
					//FIXME
					//this might cause some big consequences to our code. so we better watch out
					//and maybe always invert if we should transpose a matrix
					case CMul:
						genCodeVal(e2);
						buf.add(codeOpToString(op));
						genCodeVal(e1);
					case CAdd, CSub, CDiv, CLt, CGte, CMod, CEq, CNeq:
						genCodeVal(e1);
						buf.add(codeOpToString(op));
						genCodeVal(e2);
					case CMin, CMax, CPow, CCross, CDot:
						buf.add(codeOpToString(op));
						buf.add("(");
						genCodeVal(e1);
						buf.add(", ");
						genCodeVal(e2);
						buf.add(")");
				}
			case CUnop( op, e ):
				switch(op)
				{
					case CRcp, CNeg:
						buf.add(codeUnopToString(op));
						genCodeVal(e);
					case CSat:
						buf.add("clamp(");
						genCodeVal(e);
						buf.add(", 0.0, 1.0)");
					default:
						buf.add(codeUnopToString(op));
						buf.add("(");
						genCodeVal(e);
						buf.add(")");
				}
			case CAccess( v, idx ):
				buf.add(varName(v));
				buf.add("[");
				genCodeVal(idx);
				buf.add("]");
			case CTex( v, acc, flags ):
				//TODO do not ignore the flags
				buf.add("texture(");
				buf.add(varName(v));
				buf.add(", ");
				genCodeVal(acc);
				buf.add(")");
			case CSwiz( e, swiz ):
				genCodeVal(e);
				buf.add(".");
				for (s in swiz)
				{
					buf.add(compToString(s));
				}
				
			case CBlock( exprs, v ):
				throw "assert";
		}
	}
	
	function codeUnopToString(op:CodeUnop)
	{
		return switch(op)
		{
			case CRcp: " 1.0 / ";
			case CSqrt: "sqrt";
			case CRsq: "inversesqrt";
			case CLog: "log";
			case CExp: "exp";
			case CLen: "length";
			case CSin: "sin";
			case CCos: "cos";
			case CAbs: "abs";
			case CNeg: " - ";
			case CFrac: "fract";
			case CInt: "int";
			case CNorm: "normalize";
			case CKill: "discard";
			case CTrans: "transpose";
			case CSat: throw "assert";
		}
	}
	
	function codeOpToString(op:CodeOp)
	{
		return switch(op)
		{
			case CAdd: " + ";
			case CSub: " - ";
			case CMul: " * ";
			case CDiv: " / ";
			case CMin: "min";
			case CMax: "max";
			case CPow: "pow";
			case CCross: "cross";
			case CDot: "dot";
			case CLt: "<";
			case CGte: ">=";
			case CMod: " % ";
			case CEq: " == ";
			case CNeq: " != ";
		}
	}
	
	function compToString(c:Comp):String
	{
		return switch(c)
		{
			case X: "x";
			case Y: "y";
			case Z: "z";
			case W: "w";
		}
	}
	
	function declareVar(v:Variable):String
	{
		return typeToString(v.type, v.pos) + " " + v.name;
	}
	
	function typeToString( t:VarType, pos ) : String
	{
		return switch(t)
		{
			case TFloat: "float";
			case TFloat2: "vec2";
			case TFloat3: "vec3";
			case TFloat4: "vec4";
			case TColor3: "vec3";
			case TColor: "vec4";
			case TMatrix( r, c, transpose ): switch(Std.int(Math.max(r, c)))
			{
				case 2: "mat2";
				case 3: "mat3";
				case 4: "mat4";
				default: error("Invalid matrix number: " + Std.int(Math.max(r, c)), pos);
			}
			case TTexture( cube ): (cube) ? "sampler2D" : "samplerCube";
			case TArray( t, size ): typeToString(t, pos) + "[" + size + "]";
		}
	}
}