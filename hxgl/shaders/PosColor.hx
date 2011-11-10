package hxgl.shaders;

import hxgl.cross.Context;

#if flash
import format.agal.Tools;
class PosColor {
	public function new () {
		__shader = new PosColor_ (Context.context3D);
	}

	public function init (vertex:{mat:Array<Float>},fragment:{}) {
		var vs:Array<Float> = cast[
			1, 0, 0, 0,
			0, 1, 0, 1,
			0, 0, 1, 0,
			0, 0, 0, 1,
		];
		var vec = new flash.Vector<Float> ();
		for (x in vs) vec.push (x); 
		var mat = new flash.geom.Matrix3D (vec);

		__shader.init ({mat:mat}, {});
	}

	public function bind (vbuffer:hxgl2.cross.data.VertexBuffer) {
		__shader.bind (untyped vbuffer.vb);
	}

	var __shader:PosColor_;
}

class PosColor_ extends format.hxsl.Shader {

	static var SRC = {
		var input : {
			pos : Float3,
		};
		var color : Float4;
		function vertex( mat:M44 ) {
			var tmp = [pos.x, pos.y, pos.z, 2.0] * mat;
			out = tmp;
			color = tmp;
		}
		function fragment() {
			out = color;
		}
	};
}
#elseif js
class PosColor{

	public function new () {
		__program = Context.createProgram ();
		__program.upload (vertex, fragment);
	}

	public function init ( vertex:{mat:Array<Float>}, fragment:{}) {
		Context.setProgram (__program);
		Context.__GL__setMatrix ("mat", false, vertex.mat);
	}

	public function bind (vbuffer:hxgl2.cross.data.VertexBuffer) {
		Context.setVertexBufferAt ("pos", vbuffer, 0, "float3");
	}
	
	static var vertex:String = 
		"attribute vec3 pos;"+
		"varying vec4 color;"+
		"uniform mat4 mat;"+
		"void main() {"+
		"	color = gl_Position = mat * vec4(pos, 2.0);"+
		"}";
	static var fragment:String =
		"#ifdef GL_ES\n"+
  		"precision highp float;\n"+
  		"#endif\n"+
		"varying vec4 color;"+ 
	    "void main() {"+
		"	gl_FragColor = color;"+
		"}";

	var __program:hxgl2.cross.data.Program;
}
#end