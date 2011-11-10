package hxgl.cross.data;

#if flash
import flash.display3D.VertexBuffer3D;
class VertexBuffer {
	function new (vb:VertexBuffer3D) {
		this.vb = vb;	
	}
	public function upload (vertices:Array<Float>, offset:Int, numVerts:Int) {
		var v = new flash.Vector<Float> ();
		for (x in vertices) v.push (x);
		vb.uploadFromVector (v, offset, numVerts);
	}

	var vb:VertexBuffer3D;
}
#elseif js
class VertexBuffer {
	function new (id:Int, bsize:Int) {
		this.id = id;
		this.__bsize = bsize;
	}
	public function upload (vertices:Array<Float>, offset:Int, numVerts:Int){
		Context.gl.bindBuffer (Context.gl.ARRAY_BUFFER, id);
		Context.gl.bufferSubData (Context.gl.ARRAY_BUFFER, 0, untyped __js__('new Float32Array(vertices)'));
		Context.gl.bindBuffer (Context.gl.ARRAY_BUFFER, null);
	}
	var id:Int;
	var __bsize:Int;
}
#end