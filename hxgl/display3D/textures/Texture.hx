/**
 * ...
 * @author Matthew Spencer
 */

package hxgl.display3D.textures;

#if flash
typedef Texture = flash.display3D.textures.Texture;

#elseif cpp

import hxgl.core.GL;

class Texture
{
    public function new (width:Int, height:Int, format:hxgl.display3D.Context3DTextureFormat, optimizeForRenderToTexture:Bool)
    {
        _width = width;
        _height = height;
        _format = format;
        _optimizeForRenderToTexture = optimizeForRenderToTexture;

        GL.PixelStorei (hxgl.core.GLenums.GL_UNPACK_ALIGNMENT, 1); //FIXME Hack temporary
        _tID = GL.GenTexture ();
    }

    public function uploadFromByteArray (data:flash.utils.ByteArray, byteArrayOffset:Int, ?mipLevel:Int = 0):Void
    {
            var l = _width*_height*4;
            var b = haxe.io.Bytes.alloc (l);	
			data.position = 0;			
			
			for (i in 0...l)
			{
				var g = data[i+byteArrayOffset];
				b.set (i, g);
			}
		
			var rawData = b.getData ();

			GL.BindTexture (hxgl.core.GLenums.GL_TEXTURE_2D, _tID);

            //FIXME Hardcoded (Should be based off format)
			GL.TexParameteri (	hxgl.core.GLenums.GL_TEXTURE_2D, 
						hxgl.core.GLenums.GL_TEXTURE_WRAP_S,
						hxgl.core.GLenums.GL_REPEAT);
		    GL.TexParameteri (	hxgl.core.GLenums.GL_TEXTURE_2D, 
						    hxgl.core.GLenums.GL_TEXTURE_WRAP_T,
						    hxgl.core.GLenums.GL_REPEAT);
		    GL.TexParameteri (	hxgl.core.GLenums.GL_TEXTURE_2D, 
						    hxgl.core.GLenums.GL_TEXTURE_MAG_FILTER,
						    hxgl.core.GLenums.GL_LINEAR);
		    GL.TexParameteri (	hxgl.core.GLenums.GL_TEXTURE_2D, 
						    hxgl.core.GLenums.GL_TEXTURE_MIN_FILTER,
						    hxgl.core.GLenums.GL_LINEAR);
		    //ENDFIXME

		    GL.TexImage2D ( hxgl.core.GLenums.GL_TEXTURE_2D,
				           mipLevel,   //MIP LEVEL
				           hxgl.core.GLenums.GL_RGBA,
				           _width,   //WIDTH
				           _height,   //HEIGHT
				           0,	//BORDER
				           hxgl.core.GLenums.GL_RGBA,
				           hxgl.core.GLenums.GL_UNSIGNED_BYTE,
				           rawData);			
    }
    var _width:Int;
    var _height:Int;
    var _format:hxgl.display3D.Context3DTextureFormat;
    var _optimizeForRenderToTexture:Bool;

    var _tID:Int;
}

#end
