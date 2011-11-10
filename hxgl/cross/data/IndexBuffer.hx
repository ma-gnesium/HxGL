package hxgl.cross.data;

#if flash
import flash.display3D.IndexBuffer3D;
class IndexBuffer {
	function new (vb:IndexBuffer3D) {
		this.__vb = vb;	
	}

	public function upload (indices:Array<Int>, offset:Int, numInds:Int) {
		var v = new flash.Vector<UInt> ();
		for (x in indices) v.push (x);
		__vb.uploadFromVector (v, offset, numInds);
	}

	var __vb:IndexBuffer3D;
}
#elseif js
class IndexBuffer {
	function new (id:Int, numIndices:Int) {
		this.id = id;
		this.numIndices = numIndices;
	}
	public function upload (indices:Array<Int>, offset:Int, numInds:Int) {
		Context.gl.bindBuffer (Context.gl.ELEMENT_ARRAY_BUFFER, id);
		Context.gl.bufferSubData (Context.gl.ELEMENT_ARRAY_BUFFER, 0, untyped __js__('new Uint16Array(indices)'));
		Context.gl.bindBuffer (Context.gl.ELEMENT_ARRAY_BUFFER, null);
	}
	var id:Int;
	var numIndices:Int;
}
#end