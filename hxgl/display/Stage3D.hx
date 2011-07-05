package hxgl.display;
import hxgl.display3D.Context3D;
import flash.geom.Rectangle;

#if flash
typedef Stage3D = flash.display.Stage3D;

class Stage3DTools
{
	public static inline function getStage3D (s3D:Class<flash.display.Stage3D>, id:Int)
	{
		return flash.Lib.current.stage.stage3Ds[id];
	}
}
#else

class Stage3DTools
{
}

import hxgl.core.GL;
class Stage3D 
{

	function new() 
	{		
	}

	var vp:Rectangle;
	public var viewPort(GET_VIEWPORT,SET_VIEWPORT):Rectangle;

	function GET_VIEWPORT ():Rectangle
	{
        return vp;
	}

	function SET_VIEWPORT (r:Rectangle):Rectangle
	{
        vp = r;
        if(init)
        {
            untyped context3D.vp = vp;  //FIXME hack
        }
        return vp;        
	}
	
	public function requestContext3D ()
	{
	    if (!init)
	    {
		    GL.Init ();
		    GL.WndShow (false);
        }
		
		onNMESetup ();
	}
	
	function onNMESetup ()
	{
	    //FIXME multiple context support
	    if (!init)
	    {
		    context3D = new Context3D ();
		    untyped context3D.vp = vp;  //FIXME hack
		}
		
		nme.Lib.current.stage.dispatchEvent (new nme.events.Event (hxgl.events.Event.CONTEXT3D_CREATE, false, true));
	}
	
	public var context3D:Context3D;
	
	public function addEventListener (t,e)
	{
		flash.Lib.current.stage.addEventListener (t,e);
	}
	
	public static function getStage3D (index:Int)
	{
		#if flash
		return Lib.current.stage.stage3Ds[0];
		#else
		return stage3Ds[index];
		#end
	}
	static var stage3Ds:Array<Stage3D> = [new Stage3D ()];

	static var init:Bool = false;
}
#end
