package hxgl.display3D;

#if flash
	typedef Context3DTextureFormat = flash.display3D.Context3DTextureFormat;
#else
	class Context3DTextureFormat {
		public static inline var BGRA:String = "bgra";
	}
#end
