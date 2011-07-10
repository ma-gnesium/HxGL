package hxgl.display3D;


#if flash
typedef Context3D = flash.display3D.Context3D;

#else
import cpp.io.Process;
import haxe.io.Bytes;
import hxgl.core.GLenums;
import hxgl.geom.Rectangle;
import hxgl.core.HXGL;

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
	public function setVertexBufferAt (index:Int, vbuffer:VertexBuffer3D, bufferOffset:Int,
					format : String = "float4")
	{	
		if (vbuffer == null)
		{
			HXGL.setVertexBufferAt (index, 0, bufferOffset, format, "nohint");
		}
		else
		{
			HXGL.setVertexBufferAt (index, untyped vbuffer._vboID, bufferOffset, format, "nohint");
		}
	}
	
	public function drawTriangles (ibuffer:IndexBuffer3D, firstIndex:Int, numTriangles:Int)
	{
		if (ibuffer == null) throw "ibuffer cannot be null";
		HXGL.drawTriangles (untyped ibuffer._iboID, firstIndex, numTriangles);
	}
	
	public function createProgram ():Program3D
	{
		return untyped new Program3D (HXGL.createProgram ());
	}
	
	public function setProgram (program:Program3D)
	{
		HXGL.setProgram (untyped program._progID);
	}

    //public function createTexture(width:Int, height:Int, format:hxgl.display3D.Context3DTextureFormat, optimizeForRenderToTexture:Bool):hx//HXGL.display3D.textures.Texture
    //{
        //return new hx//HXGL.display3D.textures.Texture (width, height, format, optimizeForRenderToTexture);    
    //}
	//
    //FIXME Temporarily hacked, needs fix for shaders
    //public function setTextureAt (sampler:Int, texture:hxgl.display3D.textures.Texture)
    //{
        //HXGL.BindTexture (hx//HXGL.core.GLenums.GL_TEXTURE_2D, untyped texture._tID);   //FIXME hack
    //}
	
	public var enableErrorChecking:Bool;
	var vp:Rectangle;
}
#end
