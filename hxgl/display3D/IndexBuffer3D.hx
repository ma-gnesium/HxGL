package hxgl.display3D;
import haxe.io.Bytes;
import haxe.io.BytesOutput;
import hxgl.core.GLenums;

#if flash
typedef IndexBuffer3D = flash.display3D.IndexBuffer3D;
#elseif cpp

import hxgl.core.GL;

class IndexBuffer3D 
{

	public function new(numIndices:Int) 
	{
		_iboID = GL.GenBuffer (); //Get buffer handler
		_IndNum = numIndices;
	}
	
	public function uploadFromByteArray (
					data:Bytes, byteArrayOffset:Int,
					startOffset:Int, count:Int):Void
	{
		GL.BindBuffer (GLenums.GL_ELEMENT_ARRAY_BUFFER, _iboID);
		
		var bufferSize = _IndNum << 1;
		
		//FIXME Extend hxgl_bindBuffer to support an offset
		var tbuf:Bytes = Bytes.alloc (count << 1);	//inds * sizeof(uint16)		
		tbuf.blit (0, data, startOffset, count << 1);		//TODO check if startOffset is in bytes, or indices
		
		//Synchronous copy to GPU
		GL.BufferData (
						GLenums.GL_ELEMENT_ARRAY_BUFFER, bufferSize,
						tbuf.getData (), GLenums.GL_DYNAMIC_DRAW);
					
		
		GL.BindBuffer (GLenums.GL_ELEMENT_ARRAY_BUFFER, 0);	//DO NOT REMOVE. 		
	}
	
	public function uploadFromVector (
					data:flash.Vector<Int>,
					startOffset:Int, count:Int):Void
	{
		var bytesOutput = new BytesOutput ();
		for (j in data)
		{
			bytesOutput.writeInt16 (j);
		}
		uploadFromByteArray (bytesOutput.getBytes (), 0, 0, count);
	}
	
	
	public function dispose ():Void
	{
		throw "IndexBuffer3D.dispose(): Not yet implemented";
	}
	
	public function _dbg_forceBind ()
	{
		GL.BindBuffer (GLenums.GL_ELEMENT_ARRAY_BUFFER, _iboID);
	}
	
	var _iboID:Int;
	
	var _IndNum:Int;
}
#end
