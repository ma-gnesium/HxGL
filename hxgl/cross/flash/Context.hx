package hxgl.cross.flash;

import hxgl.cross.IContext;
import hxgl.core.Window;
import flash.display3D.Context3D;
/**
 * ...
 * @author Matthew Spencer
 */

class Context implements hxgl.cross.IContext
{
	var wnd:Window;
	var mh:Context3D;
	public function new( wnd:Window )
	{
		this.wnd = wnd;
		this.mh = wnd.display3D;
	}
	public function clear( ?red:Float = 0.0, ?green:Float = 0.0, ?blue:Float = 0.0, ?alpha:Float = 1.0, ?depth:Float = 1.0, ?stencil:Int = 0, ?mask:Int = 0xFFFFFFFF ):Void
	{
		mh.clear( red, green, blue, alpha, depth, stencil, mask );
	}
	public function present( ):Void
	{
		wnd.process( );
	}
}