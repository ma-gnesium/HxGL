/**
 * ...
 * @author Matthew Spencer
 */

package hxgl.display3D;

#if flash
	typedef Context3DTextureFormat = flash.display3D.Context3DTextureFormat;
#else
	enum Context3DTextureFormat {
		BGRA;
	}
#end
