package hxgl.display;

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

import hxgl.core.HXGL;
import hxgl.geom.Rectangle;
import hxgl.display3D.Context3D;

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
		context3D = untyped new Context3D ();
		hxgl.Lib.stage.dispatchEvent (hxgl.events.Event.CONTEXT3D_CREATE);
	}
	
	public var context3D:Context3D;
	
	public function addEventListener (t,e)
	{
		hxgl.Lib.stage.addEventListener (t,e);
	}

	static var init:Bool = false;
}
#end
