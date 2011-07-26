package hxgl.display3D;


#if flash
typedef Context3D = flash.display3D.Context3D;

#else
import haxe.io.Bytes;
import hxgl.core.GLenums;
import hxgl.display3D.textures.Texture;
import hxgl.geom.Rectangle;
import hxgl.core.HXGL;
import hxgl.Vector;

class Context3D 
{

	function new() 
	{
	}
	
	public function clear (
		?red:Float = 0.0,
		?green:Float = 0.0,
		?blue:Float = 0.0,
		?alpha:Float = 1.0,
		?depth:Float = 1.0,
		?stencil:Int = 0,
		?mask:Int = 0xFFFFFFFF)
	{
		//TODO Add stencil and mask support
		//HXGL.Clear (red,green,blue,alpha,depth);	
		HXGL.clear (red, green, blue, alpha, depth, stencil, mask);
	}
	
	public function configureBackBuffer (width : Int, height : Int, antiAlias : Int, enableDepthAndStencil : Bool = true) : Void
	{
		HXGL.configureBackBuffer (width, height, antiAlias, enableDepthAndStencil);
	}
	
	public function createIndexBuffer (numIndices:Int):IndexBuffer3D
	{
		return new IndexBuffer3D (numIndices);
	}
	
	public function createVertexBuffer (numVertices:Int, data32PerVertex:Int):VertexBuffer3D
	{
	    if (numVertices > 65535) throw "Buffer Overflow: " + numVertices + ">65535";
		return untyped new VertexBuffer3D (numVertices, data32PerVertex);
	}
	
	public function present ():Void
	{
		//Statically implemented in extern
		//TODO change implementation
	}
	
	//public function drawToBitmapData (destination : flash.display.BitmapData):Void
	//{
		
	//}
	
	public function setCulling (triangleFaceToCull:String)
	{
		HXGL.setCulling (triangleFaceToCull);
	}
	
	public function setDepthTest (depthMask:Bool, passCompareMode:String)
	{
		HXGL.setDepthTest (depthMask, passCompareMode);
	}
	
	//public function setProgramConstantsFromMatrix (programType:GLenum, firstRegister:Int, matrix:hx//HXGL.geom.Matrix3D)
	//{
		//var bo = new haxe.io.BytesOutput ();
		//for (e in matrix.rawData) bo.writeFloat (e);
		//
		//HXGL.UniformMatrix4fv (0, 0, false, bo.getBytes ().getData ());
	//}
	//
	public function setVertexBufferAt (location:String, vbuffer:VertexBuffer3D, bufferOffset:Int,
					format : String = "float4")
	{	
		if (vbuffer == null)
		{
			HXGL.setVertexBufferAt (location, 0, bufferOffset, 0, format);
		}
		else
		{
			var strd = untyped vbuffer._vertBytes;
			HXGL.setVertexBufferAt (location, untyped vbuffer._vboID, bufferOffset, strd, format);
		}
	}
	
	public function drawTriangles (ibuffer:IndexBuffer3D, ?firstIndex:Int = 0, ?numTriangles:Int = -1)
	{
		if (ibuffer == null) throw "ibuffer cannot be null";
		var ntri = ( -1 == numTriangles) ? Std.int (untyped ibuffer._IndNum / 3) : numTriangles;
		HXGL.drawTriangles (untyped ibuffer._iboID, firstIndex, ntri);
	}
	
	public function createProgram ():Program3D
	{
		return untyped new Program3D (HXGL.createProgram ());
	}
	
	public function setProgram (program:Program3D)
	{
		HXGL.setProgram (untyped program._progID);
	}

    public function createTexture(width:Int, height:Int, format:String, optimizeForRenderToTexture:Bool)
    {
		return new Texture(width, height, format, optimizeForRenderToTexture);    
    }
	
    public function setTextureAt (location:String, sampler:Int, texture:hxgl.display3D.textures.Texture)
    {
        HXGL.setTextureAt (location, sampler, texture._tID);
    }
	
	//Temporary function
	public function _setMatrixAt (location:String, data:Vector<Float>)
	{	
		HXGL.setMatrixAt (location, 1, false, data);
	}
	
	public var enableErrorChecking:Bool;
	var vp:Rectangle;
}
#end
