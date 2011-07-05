/**
 * ...
 * @author Matthew Spencer
 */

package hxgl.display3D;


#if flash
typedef Context3DCompareMode = flash.display3D.Context3DCompareMode;
#else
class Context3DCompareMode 
{
	public static inline var LESS_EQUAL:Int = 0x0203;
}
#end
