package hxgl.display3D;
import haxe.io.BytesData;
import hxgl.core.HXGL;


#if flash
typedef Program3D = flash.display3D.Program3D;

#else

class Program3D
{

	function new(id:Int) 
	{
		_progID = id;
	}
	
	public function upload (vertexProgram:String, fragmentProgram:String)
	{
		HXGL.uploadProgram (_progID, vertexProgram, fragmentProgram);		
	}
	
	var _progID:Int;
}
#end
