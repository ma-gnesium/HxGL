package hxgl.shaders;

import hxgl.cross.Context;
using hxgl.shaders.VecTools;

#if flash
import format.agal.Tools;
class MVPFun {
	public function new () {
		__shader = new MVPFun_ (Context.context3D);
	}

	public function init ( vertex:{model:Array<Float>, view:Array<Float>, proj:Array<Float>}, fragment:{}) {

		__shader.init ({
			model:new flash.geom.Matrix3D (vertex.model.vec ()),
			view:new flash.geom.Matrix3D (vertex.view.vec ()),
			proj:new flash.geom.Matrix3D (vertex.proj.vec ())
		}, {});
	}

	public function bind (vbuffer:hxgl.cross.data.VertexBuffer) {
		__shader.bind (untyped vbuffer.vb);
	}

	var __shader:MVPFun_;
}

class MVPFun_ extends format.hxsl.Shader {

	static var SRC = {
		var input : {
			pos : Float3,
		};
		var color : Float4;
		function vertex( model:M44, view:M44, proj:M44 ) {
			var tmp = [pos.x, pos.y, pos.z, 1.0];
			out = tmp * model * view * proj;
			color = tmp;
		}
		function fragment() {
			out = color;
		}
	};
}
#elseif (js||cpp)
class MVPFun{

	public function new () {
		__program = Context.createProgram ();
		__program.upload (vertex, fragment);
	}

	public function init ( vertex:{model:Array<Float>, view:Array<Float>, proj:Array<Float>}, fragment:{}) {
		Context.setProgram (__program);
		Context.__GL__setMatrix ("model", false, vertex.model);
		Context.__GL__setMatrix ("view", false, vertex.view);
		Context.__GL__setMatrix ("proj", false, vertex.proj);
	}

	public function bind (vbuffer:hxgl.cross.data.VertexBuffer) {
		//FIXME!
		Context.setVertexBufferAt ("pos", vbuffer, 0, "float3");
	}
	
	static var vertex:String = "
		attribute vec3 pos;
		uniform mat4 model;
		uniform mat4 view;
		uniform mat4 proj;
		varying vec4 color;
		void main() {
			color = vec4(pos, 1.0);
			gl_Position = proj * view * model * color;
		}
		";
	static var fragment:String =
		"#ifdef GL_ES\n"+
  		"precision highp float;\n"+
  		"#endif\n"+
		"varying vec4 color;"+ 
	    "void main() {"+
		"	gl_FragColor = color;"+
		"}";

	var __program:hxgl.cross.data.Program;
}
#end