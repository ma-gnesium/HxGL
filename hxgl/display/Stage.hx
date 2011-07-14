package hxgl.display;

#if flash
typedef Stage = flash.display.Stage;
#else
import hxgl.core.HXGL;
class Stage 
{

	function new() 
	{		
		frameRate = 30;
		_evthash = new Hash ();
		stage3Ds = new hxgl.Vector ();
	    stage3Ds.push (untyped new Stage3D ());  
	}

    public var stage3Ds:hxgl.Vector<Stage3D>; 
	
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
	
	public var frameRate:Int;
	static var ltime:Float = 0;
	static var nframes:Int = 0;
	static var lslp:Float;
	public function dispatchEvent (e:String)
	{
		#if (cpp||neko)
		var dt:Float = 0;
		dt = cpp.Sys.cpuTime ();
		#end
				
		if (_evthash.exists (e))
		{
			var cbs = _evthash.get (e);
			for (c in cbs)
			{
				c ({ });
			}
			if (e != hxgl.events.Event.ENTER_FRAME) _evthash.remove(e);	//hack to stop all events from firing forever
		}
		
		#if (cpp||neko)
		if (e == hxgl.events.Event.ENTER_FRAME) 
		{
			var ct = cpp.Sys.cpuTime ();
			dt = ct - dt;
			
			if (frameRate < 0) frameRate = 1;
			if (frameRate > 120) frameRate = 120;
			
			dt = (1 / frameRate) - dt - lslp;
			
			if (dt > 0)
			{
				lslp = dt;
				cpp.Sys.sleep (dt);
			}
		}
		#end
	}
	
	function callDE ()
	{
		dispatchEvent (hxgl.events.Event.ENTER_FRAME);
	}
    
	function extern_registerOnEnterFrame ()
	{
		HXGL.setEnterFrame (callDE);
	}
	
	
	var _evthash:Hash<Array<Dynamic->Void >> ;
}
#end
