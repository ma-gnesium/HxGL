package hxgl.display3D;


#if flash
	typedef VertexBuffer3D = flash.display3D.VertexBuffer3D;
	
#else
import haxe.io.Bytes;
import haxe.io.BytesData;
import haxe.io.BytesOutput;
import hxgl.core.GLenums;
import hxgl.core.HXGL;
import hxgl.Vector;

class VertexBuffer3D 
{

	public function new(numVertices:Int, data32PerVertex:Int) 
	{
		_vertNum = numVertices;
		_vertBytes = data32PerVertex * 4;						//Working with p32 is confusing, convert to bytes
		_vboID = HXGL.createVertexBuffer (_vertNum*_vertBytes); //Get buffer handler
	}
	
	public function uploadFromByteArray (
					data:BytesData, byteArrayOffset:Int,
					startVertex:Int, numVertices:Int):Void
	{
		if (startVertex + numVertices > _vertNum) throw "Overflow";
		HXGL.uploadFromByteArrayVertex (_vboID, data, byteArrayOffset, 
				startVertex * _vertBytes, numVertices*_vertBytes);	//Use care, works in bytes, not numverts
	}
	
	public function uploadFromVector (data:Vector<Float>, startVertex:Int, numVertices:Int)
	{
		if (startVertex + numVertices > _vertNum) throw "Overflow";
		HXGL.uploadFromVectorVertex (_vboID, data, startVertex * (_vertBytes >>> 2), numVertices * (_vertBytes >>> 2)); //we need num entries, not num bytes
	}
	
	//public function uploadFromVector (
					//data:flash.Vector<Float>,
					//startVertex:Int, NumVertices:Int):Void
	//{
		//Cheating here by offloading to upfromba;
		//var bytesOutput = new BytesOutput ();
		//
		//for (j in data)
		//{
			//bytesOutput.writeFloat (j);
		//}
		//uploadFromByteArray (bytesOutput.getBytes (), 0, 0, NumVertices);
	//}
	
	var _vboID:Int;				//handle
	var _vertNum:Int;
	var _vertBytes:Int;	
}
#end
