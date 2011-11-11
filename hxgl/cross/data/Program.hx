package hxgl.cross.data;

#if flash
import flash.display3D.Program3D;
class Program {
	function new (prog:Program3D) {
		this.__prog = prog;	
	}

	public function upload (vertexProgram:flash.utils.ByteArray, fragmentProgram:flash.utils.ByteArray) {
		__prog.upload (vertexProgram, fragmentProgram);
	}

	var __prog:Program3D;
}
#elseif ((js||cpp))
class Program {
	function new (prog:Int) {
		this.__prog = prog;
	}
	
	public function upload (vertexProgram:String, fragmentProgram:String) {
		var gl = Context.gl;

		var __vertex = gl.createShader (gl.VERTEX_SHADER);
		gl.shaderSource (__vertex, vertexProgram);
		gl.compileShader (__vertex);
		if (!gl.getShaderParameter (__vertex, gl.COMPILE_STATUS)) {
			throw "Could not compile vertex shader:\n\n" + untyped gl.getShaderInfoLog (__vertex);
		}
		gl.attachShader (__prog, __vertex);

		var __fragment = gl.createShader (gl.FRAGMENT_SHADER);
		gl.shaderSource (__fragment, fragmentProgram);
		gl.compileShader (__fragment);
		if (!gl.getShaderParameter (__fragment, gl.COMPILE_STATUS)) {
			throw "Could not compile fragment shader:\n\n" + untyped gl.getShaderInfoLog (__fragment);
		}
		gl.attachShader (__prog, __fragment);

		gl.linkProgram (__prog);
		if (!gl.getProgramParameter (__prog, gl.LINK_STATUS)) {
			throw "Could not link the program!\n\n" + untyped gl.getProgramInfoLog (__prog);
		}
	}

	var __prog:Int;
	var __vertex:Int;
	var __fragment:Int;
}
#end