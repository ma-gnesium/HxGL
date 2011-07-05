package hxgl.display3D;

#if flash
typedef Context3DTriangleFace = flash.display3D.Context3DTriangleFace
#else
class Context3DTriangleFace 
{
	public static inline var BACK:Int = 0x0405;
	public static inline var NONE:Int = 0x0;
}
#end
