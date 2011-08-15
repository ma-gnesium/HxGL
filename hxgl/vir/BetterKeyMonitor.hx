package hxgl.vir;

#if !flash
class BetterKeyMonitor
{
	static var keys:IntHash<Bool> = new IntHash ();

	static var mx:Int;
	static var my:Int;
	static var mLDown:Bool;

	static var remapFrom:KeyMap;
	static var remapTo:KeyMap;
	public static function init (from:KeyMap,to:KeyMap)
	{
		//Mouse stuff
		mx = 0;
		my = 0;
		mLDown = false;

		//KBD stuff
		remapFrom = from;	
		remapTo = to;
		flash.Lib.current.stage.addEventListener (flash.events.Event.ENTER_FRAME, onFrame);
	}

	public static function onFrame (e)
	{
		//****KEYBOARD
		for (fld in remapFrom.keys.keys())
		{
			var from_kc = remapFrom.keys.get (fld);
			var to_kc = remapTo.keys.get (fld);

			var d:Bool = isDown (from_kc); //recieve remapFrom
	
			var kc = to_kc;	//dispatch remapTo
			
			if (!keys.exists (kc))
			{
				keys.set (kc,d);	
				
				if (d)
				{
					//dispatch down event
					flash.Lib.current.stage.dispatchEvent (
						new flash.events.KeyboardEvent (
							flash.events.KeyboardEvent.KEY_DOWN,
							true,
							false,
							kc,
							kc));
				}
			}
			else
			{
				var g = keys.get (kc);
				//FIXME commented out to enable "key repeat"
				//if (d != g)	 //has key changed
				{
					if (d)
					{
						flash.Lib.current.stage.dispatchEvent (
							new flash.events.KeyboardEvent (
								flash.events.KeyboardEvent.KEY_DOWN,
								true,
								false,
								kc,
								kc));
						//dispatch down	
					}
					else
					{
						flash.Lib.current.stage.dispatchEvent (
							new flash.events.KeyboardEvent (
								flash.events.KeyboardEvent.KEY_UP,
								true,
								false,
								kc,
								kc));
						//dispatch up
					}
					keys.set (kc,d);
				}
			}
		}

		//*******MOUSE
		var n_mx = mouseX ();
		var n_my = mouseY ();
		if (n_mx != mx || n_my != my)
		{
			flash.Lib.current.stage.dispatchEvent (
				new flash.events.MouseEvent (
					flash.events.MouseEvent.MOUSE_MOVE,
					true,
					false,
					n_mx,
					n_my));
		}

		//old mouse mLDown
		var nLeft = mouseLeftDown ();

		if (nLeft != mLDown)
		{
			if (nLeft)
			{
				flash.Lib.current.stage.dispatchEvent (
					new flash.events.MouseEvent (
						flash.events.MouseEvent.MOUSE_DOWN,
						true,
						false,
						n_mx,
						n_my));

			}
			else
			{
				flash.Lib.current.stage.dispatchEvent (
					new flash.events.MouseEvent (
						flash.events.MouseEvent.MOUSE_UP,
						true,
						false,
						n_mx,
						n_my));

			}
		}

		mLDown = nLeft;
		mx = n_mx;
		my = n_my;
	}
}
#end
