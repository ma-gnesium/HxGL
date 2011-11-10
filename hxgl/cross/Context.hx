package hxgl.cross;
import hxgl.cross.data.VertexBuffer;
import hxgl.cross.data.IndexBuffer;
import hxgl.cross.data.Program;

#if js
	import hxgl.core.GL;
#end

#if !(js || flash)
	#error "Only JS and Flash are supported"
#end

class Context {

	public static function init (cb:Void->Void) {
		#if flash
			stage3D = flash.Lib.current.stage.stage3Ds[0];
			stage3D.addEventListener (flash.events.Event.CONTEXT3D_CREATE,
				function (_){
					context3D = stage3D.context3D;
					context3D.enableErrorChecking = true;
					cb ();
					context3D.setCulling (flash.display3D.Context3DTriangleFace.NONE);
					context3D.setDepthTest (false, flash.display3D.Context3DCompareMode.NEVER);
				}
			);
			stage3D.requestContext3D ();
		#elseif (js || cpp)
			canvas = js.Lib.document.getElementById( "hxgl-out" );
			if (null == canvas)
			{
				canvas = js.Lib.document.createElement("canvas");
				//canvas.setAttribute('width', width);
				//canvas.setAttribute('height', height);
				canvas.setAttribute('id', "hxgl-out");
				js.Lib.document.body.appendChild(canvas);
				
				canvas = js.Lib.document.getElementById( "hxgl-out" );
				if (null == canvas) throw "Unable to create context";
			}		


			gl = canvas.getContext( "experimental-webgl" );
			gl = untyped WebGLDebugUtils.makeDebugContext (gl);
			if (null == gl) throw "Unable to create gl";

			cb ();
		#end
	}

	public static function move (x:Float, y:Float) {
		#if flash
			stage3D.x = x;
			stage3D.y = y;
		#elseif js
			canvas.setAttribute('style', 'position: absolute; left: ' + x + 'px; top:' + y + 'px;');
		#end
	}

	public static function clear (
			?r:Float=0.0,?g:Float=0.0,?b:Float=0.0,?a:Float=1.0,
			?d:Int = 0xFFFFFFFF,?m:Int = 0x0) {
		#if flash
			context3D.clear (r,g,b,a,d,m);
		#elseif js
			//DO GL COMMAND
			gl.clearColor (r,g,b,a);
			gl.clear (gl.COLOR_BUFFER_BIT);
		#end
	}

	public static function setCulling(triangleFaceToCull:String) {
		#if flash
			context3D.setCulling (cast triangleFaceToCull);
		#elseif js
			switch (triangleFaceToCull) {
			case "BACK":
				gl.enable (gl.CULL_FACE);
				gl.cullFace (gl.BACK);
			case "FRONT":
				gl.enable (gl.CULL_FACE);
				gl.cullFace (gl.FRONT);
			case "FRONT_AND_BACK":
				gl.enable (gl.CULL_FACE);
				gl.cullFace (gl.FRONT_AND_BACK);
			case "NONE":
				gl.disable (gl.CULL_FACE);
				gl.cullFace (gl.NONE);
			default: throw "Invalid cull mode";
			}
		#end
	}

	public static function setDepthTest(depthMask:Bool, passCompareMode:String) {
		#if flash
			context3D.setDepthTest (depthMask, cast passCompareMode);
		#elseif js
			gl.depthMask (depthMask);
			switch (passCompareMode) {
			case "ALWAYS": gl.depthFunc (gl.ALWAYS);
			case "EQUAL": gl.depthFunc (gl.EQUAL);
			case "GREATER": gl.depthFunc (gl.GREATER);
			case "GREATER_EQUAL": gl.depthFunc (gl.GEQUAL);
			case "LESS": gl.depthFunc (gl.LESS);
			case "LESS_EQUAL": gl.depthFunc (gl.LEQUAL);
			case "NEVER": gl.depthFunc (gl.NEVER);
			case "NOT_EQUAL": gl.depthFunc (gl.NOTEQUAL);
			default: throw "Invalid passCompareMode";
			}
		#end
	}

	public static function configureBackBuffer (width:Int, height:Int, aa:Int) {
		#if flash
			context3D.configureBackBuffer (width, height, aa, false);
		#elseif js
			canvas.setAttribute("width", width);
			canvas.setAttribute("height", height);
			gl.viewport(0, 0, width, height);
		#end
	}

	public static function createVertexBuffer (numVertices:Int, data32PerVertex:Int):VertexBuffer {
		#if flash
			return untyped new VertexBuffer (
				context3D.createVertexBuffer (numVertices, data32PerVertex));
		#elseif js
			var id = gl.createBuffer ();
			gl.bindBuffer (gl.ARRAY_BUFFER, id);
			gl.bufferData (gl.ARRAY_BUFFER, numVertices * data32PerVertex * 4, gl.STATIC_DRAW);
			gl.bindBuffer (gl.ARRAY_BUFFER, null);
			return untyped new VertexBuffer (
				id, data32PerVertex * 4
			);
		#end
	}

	public static function createIndexBuffer (numIndices:Int):IndexBuffer {
		#if flash
			return untyped new IndexBuffer (
				context3D.createIndexBuffer (numIndices));
		#elseif js
			var id = gl.createBuffer ();
			gl.bindBuffer (gl.ELEMENT_ARRAY_BUFFER, id);
			gl.bufferData (gl.ELEMENT_ARRAY_BUFFER, numIndices * 2, gl.STATIC_DRAW);
			gl.bindBuffer (gl.ELEMENT_ARRAY_BUFFER, null);
			return untyped new IndexBuffer (
				id, numIndices
			);
		#end
	}

	public static function drawTriangles (indexBuffer:IndexBuffer, ?firstIndex:Int = 0, ?numTriangles:Int = -1) {
		#if flash
			context3D.drawTriangles (untyped indexBuffer.__vb, firstIndex, numTriangles);
		#elseif js
			gl.bindBuffer (gl.ELEMENT_ARRAY_BUFFER, untyped indexBuffer.id);
			
			if (numTriangles == -1) {
				numTriangles = untyped indexBuffer.numIndices;
			} else {
				numTriangles *= 3;
			}
			gl.drawElements (gl.TRIANGLES, numTriangles, gl.UNSIGNED_SHORT, firstIndex);
			gl.bindBuffer (gl.ELEMENT_ARRAY_BUFFER, null);
		#end
	}

	public static function setVertexBufferAt (index:LOCATION, buffer:VertexBuffer, bufferOffset:Int, format:String) {
		#if flash
			context3D.setVertexBufferAt (index, untyped buffer.vb, bufferOffset, untyped format);
		#elseif js
			gl.bindBuffer (gl.ARRAY_BUFFER, untyped buffer.id);
			var loc = gl.getAttribLocation (__program, index);
			
			var type:Int = 0;
			var size:Int = 0;

			switch (format) {
			case "float3":
				type = gl.FLOAT;
				size = 3;
			default: throw "Invalid format";
			}
			//throw "FIXME STRIDE";
			gl.vertexAttribPointer (loc, size, type, false, untyped buffer.__bsize, bufferOffset*4);
			gl.enableVertexAttribArray (loc);
			gl.bindBuffer (gl.ARRAY_BUFFER, null);
		#end
	}

	#if js
	public static function __GL__setMatrix (loc:String, transpose:Bool, mat:Array<Float>) {
		var loc = untyped gl.getUniformLocation (__program, loc);
		gl.uniformMatrix4fv (loc, transpose, mat);	
	}
	#end

	public static function createProgram ():Program {
		#if flash
			return untyped new Program (context3D.createProgram ());
		#elseif js
			return untyped new Program (gl.createProgram ());
		#end
	}

	public static function setProgram (program:Program) {
		#if flash
			context3D.setProgram (untyped program.__prog);
		#elseif js
			__program = untyped program.__prog;
			gl.useProgram (__program);
		#end
	}

	public static function present () {
		#if flash
			context3D.present ();
		#elseif js

		#end
	}

	#if flash
	public static var context3D:flash.display3D.Context3D;
	public static var stage3D:flash.display.Stage3D;
	#elseif js
	public static var canvas:Dynamic;
	public static var gl:GL;
	public static var __program:Int;
	#end
}

typedef LOCATION = 
#if flash
	UInt;
#elseif js
	String;
#end