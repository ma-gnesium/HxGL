package hxgl.shaders;

import hxgl.cross.Context;

#if flash
import format.agal.Tools;
class White {
	public function new () {
		__shader = new White_ (Context.context3D);
	}

	public function init (vertex:{},fragment:{}) {
		__shader.init ({}, {});
	}

	public function bind (vbuffer:hxgl.cross.data.VertexBuffer) {
		__shader.bind (untyped vbuffer.vb);
	}

	var __shader:White_;
}

class White_ extends format.hxsl.Shader {

	static var SRC = {
		var input : {
			pos : Float3,
		};
		function vertex( mat:M44 ) {
			out = [pos.x, pos.y, pos.z, 1.0];
		}
		function fragment() {
			out = [1,1,1,1];
		}
	};
}
#elseif (js||cpp)
class White {

	public function new () {
		__program = Context.createProgram ();
		__program.upload (vertex, fragment);
	}

	public function init ( vertex:{}, fragment:{}) {
		Context.setProgram (__program);
	}

	public function bind (vbuffer:hxgl.cross.data.VertexBuffer) {
		Context.setVertexBufferAt ("pos", vbuffer, 0, "float3");
	}
	
	static var vertex:String = 
		"attribute vec3 pos;"+
		"void main() {"+
		"	gl_Position = vec4(pos, 1.0);"+
		"}";
	static var fragment:String =
		"#ifdef GL_ES\n"+
  		"precision highp float;\n"+
  		"#endif\n"+
	    "void main() {"+
		"	gl_FragColor = vec4(1,1,1,1);"+
		"}";

	var __program:hxgl.cross.data.Program;
}
#end