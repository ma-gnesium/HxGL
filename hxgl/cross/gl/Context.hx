package hxgl.cross.gl;

import hxgl.cross.IContext;
import hxgl.core.Window;
import hxgl.core.GL;
/**
 * ...
 * @author Matthew Spencer
 */

class Context implements IContext
{
	var wnd:Window;
	var gl:GL;
	public function new( wnd:Window )
	{
		this.wnd = wnd;
		this.gl = wnd.gl;
	}
	public function clear( ?red:Float = 0.0, ?green:Float = 0.0, ?blue:Float = 0.0, ?alpha:Float = 1.0, ?depth:Float = 1.0, ?stencil:Int = 0, ?mask:Int = 0xFFFFFFFF ):Void
	{
		gl.clearColor( red, green, blue, alpha );
		gl.clearDepth( depth );
		gl.clear( gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT );
	}
	public function present( ):Void
	{
		wnd.process( );
	}
	
	
}