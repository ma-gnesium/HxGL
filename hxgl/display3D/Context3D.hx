package hxgl.display3D;
import haxe.io.Bytes;
import hxgl.core.GLenums;

#if flash
typedef Context3D = flash.display3D.Context3D;

class Context3D_TOOLS
{
	//FIXME: This will not work, it's hidden by the true setVertexBufferAt
	public static function setVertexBufferAt (c3d:flash.display3D.Context3D, index:Int, buffer:VertexBuffer3D, bufferOffset:Int,
					?format : Context3DVertexBufferFormat, _hint:GLenum)
	{
		c3d.setVertexBufferAt (index, buffer, bufferOffset, format);
	}
}
#elseif cpp
class Context3D_TOOLS
{
	
}

import flash.geom.Rectangle;
import hxgl.core.GL;

class Context3D 
{

	public function new() 
	{
		//For readback
		screen = new flash.display.Bitmap (new flash.display.BitmapData (512, 512, false, 0x000000));
		flash.Lib.current.addChildAt (screen, 0);
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
		GL.Clear (red,green,blue,alpha,depth);	
	}
	
	public function configureBackBuffer (width : Int, height : Int, antiAlias : Int, enableDepthAndStencil : Bool = true) : Void
	{
		GL.ConfigureBackBuffer (width, height, antiAlias, enableDepthAndStencil);
	}
	
	public function createIndexBuffer (numIndices:Int):IndexBuffer3D
	{
		return new IndexBuffer3D (numIndices);
	}
	
	public function createVertexBuffer (numVertices:Int, data32PerVertex:Int):VertexBuffer3D
	{
	    if (numVertices > 65535) throw "Buffer Overflow: " + numVertices + ">65535";
		return new VertexBuffer3D (numVertices, data32PerVertex);
	}
	
	public function present ():Void
	{
		GL.Present ();
		GL.ProcessMessages ();

		//	READ TO NME		(SLOW)
		var bd = _readPixels (512, 512);
		
		var ba = new flash.utils.ByteArray ();
		ba.nmeData = bd;

		

		screen.bitmapData.setPixels (screen.bitmapData.rect, ba);
		//
	}
	
	public function drawToBitmapData (destination : flash.display.BitmapData):Void
	{
		GL.Present ();
		GL.ProcessMessages ();
		
		var bd = haxe.io.Bytes.ofData (_readPixels (512, 512));
		var bd2 = haxe.io.Bytes.alloc (bd.length);

        for (y in 0...512)
		{
			for (x in 0...512)
			{
                bd2.set ((((512-y)*512)+x)*4, bd.get ((((y)*512)+x)*4));
			}
		}
		
		var ba = new flash.utils.ByteArray ();
		ba.nmeData = bd.getData ();
		
		destination.setPixels (destination.rect, ba);
	}
	
	public function setCulling (mode:GLenum)
	{
		
	}
	
	public function setDepthTest (enabled:Bool, mode:GLenum)
	{
		
	}
	
	public function setProgramConstantsFromMatrix (programType:GLenum, firstRegister:Int, matrix:hxgl.geom.Matrix3D)
	{
		var bo = new haxe.io.BytesOutput ();
		for (e in matrix.rawData) bo.writeFloat (e);
		
		GL.UniformMatrix4fv (0, 0, false, bo.getBytes ().getData ());
	}
	
	public function setVertexBufferAt (index:Int, buffer:VertexBuffer3D, bufferOffset:Int,
					?format : Context3DVertexBufferFormat, _hint:GLenum)
	{		
		if (format == null) {
		    format = Context3DVertexBufferFormat.FLOAT_3;
		}
		GL.BindBuffer (GLenums.GL_ARRAY_BUFFER, untyped buffer._vboID);
		
		var size:Int;
		var type:Int;
		switch (format)
		{
			case FLOAT_2:
				size = 2;
				type = GLenums.GL_FLOAT;
			case FLOAT_3:
				size = 3;
				type = GLenums.GL_FLOAT;
			case FLOAT_4:
				size = 4;
				type = GLenums.GL_FLOAT;
			default:
				throw "Context3DVertexBufferFormat." + format + " Not supported yet";
			
		}
		GL.VertexAttribPointer (index, size, type, false, untyped buffer._vertBytes, bufferOffset, _hint);
	
		GL.BindBuffer (GLenums.GL_ARRAY_BUFFER, 0);      //Cleanup, do not remove
	}
	
	public function drawTriangles (ibuffer:IndexBuffer3D)
	{

        GL.Viewport (Std.int (vp.x), Std.int (vp.y), Std.int (vp.width), Std.int (vp.height)); //FIXME Temporary hack
	
		GL.BindBuffer (GLenums.GL_ELEMENT_ARRAY_BUFFER, untyped ibuffer._iboID);
		
		GL.DrawElementArray (GLenums.GL_TRIANGLES, untyped ibuffer._IndNum, GLenums.GL_UNSIGNED_SHORT);
		
		GL.BindBuffer (GLenums.GL_ELEMENT_ARRAY_BUFFER, 0);      //Cleanup, do not remove
	}

    public function createTexture(width:Int, height:Int, format:hxgl.display3D.Context3DTextureFormat, optimizeForRenderToTexture:Bool):hxgl.display3D.textures.Texture
    {
        return new hxgl.display3D.textures.Texture (width, height, format, optimizeForRenderToTexture);    
    }

    //FIXME Temporarily hacked, needs fix for shaders
    public function setTextureAt (sampler:Int, texture:hxgl.display3D.textures.Texture)
    {
        GL.BindTexture (hxgl.core.GLenums.GL_TEXTURE_2D, untyped texture._tID);   //FIXME hack
    }
	
	public var enableErrorChecking:Bool;
	
	public function _dbg_DrawArrays (mode:GLenum, first:GLint, count:GLsizei):Void
	{
		GL.DrawArrays (mode, first, count);
	}
	
	var screen:flash.display.Bitmap;
	public function _readPixels (w:Int, h:Int):haxe.io.BytesData
	{
		var bd = Bytes.alloc (w * h * 4).getData ();
		
		GL.ReadPixels (0,0,w,h, GLenums.GL_RGBA, GLenums.GL_UNSIGNED_BYTE, bd);
		
		var b = Bytes.ofData (bd);

		return b.getData ();
	}

	public function _writePixels (ba:flash.utils.ByteArray, w:Int, h:Int)
	{
		var time:Int = flash.Lib.getTimer ();
		var b = haxe.io.Bytes.alloc (w*h*4);

        	//FIXME Performance issues. Won't be a problem on latest NME svn if using ByteArray.
		ba.position = 0;
		for (i in 0...(w*h*4))
		{
			b.set (i, ba[i]);
		}
		time = flash.Lib.getTimer () - time;
		trace (time + "ms");

		GL.WritePixels (w, h, b.getData ());
	}
	var vp:Rectangle;
}
#end
