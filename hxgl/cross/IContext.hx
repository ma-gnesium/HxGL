package hxgl.cross;

/**
 * ...
 * @author Matthew Spencer
 */

interface IContext 
{
	public function clear( ?red:Float = 0.0, ?green:Float = 0.0, ?blue:Float = 0.0, ?alpha:Float = 1.0, ?depth:Float = 1.0, ?stencil:Int = 0, ?mask:Int = 0xFFFFFFFF ):Void;
	public function present( ):Void;
}