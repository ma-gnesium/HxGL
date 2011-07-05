package hxgl.display3D;
import haxe.io.Bytes;
import haxe.io.BytesOutput;
import hxgl.core.GLenums;

#if flash
	typedef VertexBuffer3D = flash.display3D.VertexBuffer3D;
#elseif cpp

import hxgl.core.GL;

class VertexBuffer3D 
{

	public function new(numVertices:Int, data32PerVertex:Int) 
	{
		_vboID = GL.GenBuffer (); //Get buffer handler
		_vertNum = numVertices;
		_vertBytes = data32PerVertex * 4;//FIXME modify to actual 32bpv
	}
	
	public function uploadFromByteArray (
					data:Bytes, byteArrayOffset:Int,
					startVertex:Int, numVertices:Int):Void
	{
		GL.BindBuffer (GLenums.GL_ARRAY_BUFFER, _vboID);
		
		var bufferSize = _vertBytes * _vertNum;
		
		//FIXME Extend hxgl_bindBuffer to support an offset
		var tbuf:Bytes = Bytes.alloc (_vertNum * _vertBytes);		
		tbuf.blit (0, data, startVertex * _vertBytes, numVertices * _vertBytes);
		
		//Synchronous copy to GPU
		GL.BufferData (
						GLenums.GL_ARRAY_BUFFER, bufferSize,
						tbuf.getData (), GLenums.GL_DYNAMIC_DRAW);
					
		
		GL.BindBuffer (GLenums.GL_ARRAY_BUFFER, 0);	//DO NOT REMOVE. 		
	}
	
	public function uploadFromVector (
					data:flash.Vector<Float>,
					startVertex:Int, NumVertices:Int):Void
	{
		//Cheating here by offloading to upfromba;
		var bytesOutput = new BytesOutput ();
		
		for (j in data)
		{
			bytesOutput.writeFloat (j);
		}
		uploadFromByteArray (bytesOutput.getBytes (), 0, 0, NumVertices);
	}
	
	public function dispose ():Void
	{
		throw "VertexBuffer3D.dispose(): Not yet implemented";
	}
	
	public function _dbg_forceBind ()
	{
		GL.BindBuffer (GLenums.GL_ARRAY_BUFFER, _vboID);
	}
	
	var _vboID:Int;
	
	var _vertNum:Int;
	var _vertBytes:Int;	
}
#end
