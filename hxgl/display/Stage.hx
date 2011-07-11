package hxgl.display;

#if flash
typedef Stage = flash.display.Stage;
#else
import hxgl.core.HXGL;

class Stage 
{

	function new() 
	{		
		_evthash = new Hash ();
		stage3Ds = new flash.Vector ();
	    stage3Ds.push (untyped new Stage3D ());  
	}

    public var stage3Ds:flash.Vector<Stage3D>; 
	
	public function addEventListener (e:String, cb:Dynamic->Void)
	{
		if (!_evthash.exists (e))
		{
			_evthash.set (e, [cb]);
		}
		else
		{
			var a:Array <Dynamic->Void> = _evthash.get (e);
			if (Lambda.exists (a, function (g) { return g == cb; } ))
				return;
			a.push (cb);
		}
	}
	
	public function removeEventListener (e:String, cb:Dynamic->Void)
	{
		if (!_evthash.exists (e))
		{
			throw "Failed to remove event, does not exist";
		}
		else
		{
			var a:Array <Dynamic->Void> = _evthash.get (e);
			if (!Lambda.exists (a, function (g) { return g == cb; } ))
				throw "Failed to remove event, does not exist";
			a.remove (cb);
		}
	}
	
	public function dispatchEvent (e:String)
	{
		if (_evthash.exists (e))
		{
			var cbs = _evthash.get (e);
			for (c in cbs)
			{
				c ({ });
			}
			if (e != hxgl.events.Event.ENTER_FRAME) _evthash.remove(e);	//hack to stop all events from firing forever
		}
	}
    
	function extern_registerOnEnterFrame ()
	{
		var de = dispatchEvent;
		HXGL.setEnterFrame (function () { de (hxgl.events.Event.ENTER_FRAME); } );
	}
	
	
	var _evthash:Hash < Array < Dynamic->Void >> ;
}
#end
