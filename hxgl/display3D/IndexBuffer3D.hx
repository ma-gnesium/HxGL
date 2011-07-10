package hxgl.display3D;


#if flash
typedef IndexBuffer3D = flash.display3D.IndexBuffer3D;
#else

import haxe.io.Bytes;
import haxe.io.BytesData;
import haxe.io.BytesOutput;
import hxgl.core.GLenums;
import hxgl.core.HXGL;

class IndexBuffer3D 
{

	public function new(numIndices:Int) 
	{
		_iboID = HXGL.createIndexBuffer (numIndices << 1);	//indices -> sizebytes
		_IndNum = numIndices;
	}
	
	public function uploadFromByteArray (
					data:BytesData, byteArrayOffset:Int,
					startOffset:Int, count:Int):Void
	{
		HXGL.uploadFromByteArrayIndex (_iboID, data, byteArrayOffset, startOffset, count << 1);//inds to totalsize	
	}
	
	//public function uploadFromVector (
					//data:flash.Vector<Int>,
					//startOffset:Int, count:Int):Void
	//{
		//var bytesOutput = new BytesOutput ();
		//for (j in data)
		//{
			//bytesOutput.writeInt16 (j);
		//}
		//uploadFromByteArray (bytesOutput.getBytes (), 0, 0, count);
	//}
	
	
	//public function dispose ():Void
	//{
		//throw "IndexBuffer3D.dispose(): Not yet implemented";
	//}
	
	var _iboID:Int;				//handle
	var _IndNum:Int;
}
#end
