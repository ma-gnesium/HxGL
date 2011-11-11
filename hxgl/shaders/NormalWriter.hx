package hxgl.shaders;

import hxgl.cross.Context;
using hxgl.shaders.VecTools;

#if flash
import format.agal.Tools;
class NormalWriter {
	public function new () {
		__shader = new NormalWriter_ (Context.context3D);
	}

	public function init (vertex:{mview:Array<Float>, proj:Array<Float>},fragment:{}) {
		var mview = 

		__shader.init ({
			mview:new flash.geom.Matrix3D (vertex.mview.vec ()),
			proj:new flash.geom.Matrix3D (vertex.proj.vec ())
		}, {});
	}

	public function bind (vbuffer:hxgl.cross.data.VertexBuffer) {
		__shader.bind (untyped vbuffer.vb);
	}

	var __shader:NormalWriter_;
}

class NormalWriter_ extends format.hxsl.Shader {

	static var SRC = {
		var input : {
			pos : Float3,
			norm : Float3
		};
		var normal : Float3;
		function vertex( mview:M44, proj:M44 ) {
			out = [pos.x, pos.y, pos.z, 1.0] * mview * proj;
			normal = norm;
		}
		function fragment() {
			out = [normal.x, normal.y, normal.z, 1];
		}
	};
}
#elseif (js||cpp)
class NormalWriter{

	public function new () {
		__program = Context.createProgram ();
		__program.upload (vertex, fragment);
	}

	public function init ( vertex:{mview:Array<Float>, proj:Array<Float>}, fragment:{}) {
		Context.setProgram (__program);
		Context.__GL__setMatrix ("mview", false, vertex.mview);
		Context.__GL__setMatrix ("proj", false, vertex.proj);
	}

	public function bind (vbuffer:hxgl.cross.data.VertexBuffer) {
		//FIXME!
		Context.setVertexBufferAt ("pos", vbuffer, 0, "float3");
		Context.setVertexBufferAt ("norm", vbuffer, 3, "float3");
	}
	
	static var vertex:String = "
		attribute vec3 pos;
		attribute vec3 norm;
		varying vec3 normal;
		uniform mat4 mview;
		uniform mat4 proj;
		void main() {
			gl_Position = proj * mview * vec4(pos, 1.0);
			normal = norm;
		}
		";
	static var fragment:String =
		"#ifdef GL_ES\n"+
  		"precision highp float;\n"+
  		"#endif\n"+
		"varying vec3 normal;"+ 
	    "void main() {"+
		"	gl_FragColor = vec4 (normal.xyz, 1);"+
		"}";

	var __program:hxgl.cross.data.Program;
}
#end