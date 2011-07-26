package hxgl.display3D.textures;

#if flash
typedef Texture = flash.display3D.textures.Texture;

#else
import haxe.io.BytesData;
import hxgl.core.HXGL;

class Texture
{
    public function new (width:Int, height:Int, format:String, optimizeForRenderToTexture:Bool)
    {
        _width = width;
        _height = height;
        _format = format;
        _optimizeForRenderToTexture = optimizeForRenderToTexture;

		//TODO Add support for mipleve in HXGL."" function
        _tID = HXGL.createTexture (width, height, format, optimizeForRenderToTexture);
    }

    public function uploadFromByteArray (data:BytesData, byteArrayOffset:Int, ?mipLevel:Int = 0):Void
    {
		#if js
			//Temporary
			var i = 0;
			var t:Int;
			while (i < data.length)
			{
				var b:Int = data[i];
				var g:Int = data[i+1];
				var r:Int = data[i+2];
				var a:Int = data[i+3];
				data[i] = r;
				data[i + 1] = g;
				data[i + 2] = b;
				data[i + 3] = a;
				i += 4;
			}
		#end
		
		//TODO Add support for mipleve in HXGL."" function
		HXGL.uploadFromByteArrayTexture (_tID, data, byteArrayOffset, _width, _height);
    }
	
    var _width:Int;
    var _height:Int;
    var _format:String;
    var _optimizeForRenderToTexture:Bool;
    public var _tID:Int;
}

#end
