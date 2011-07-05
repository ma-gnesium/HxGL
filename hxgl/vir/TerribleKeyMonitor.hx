package hxgl.vir;

#if !flash
class TerribleKeyMonitor
{
	static var keys:IntHash<Bool> = new IntHash ();

	public static function init ()
	{
		flash.Lib.current.stage.addEventListener (flash.events.Event.ENTER_FRAME, onFrame);
	}

	public static function init_temp (?kill:Bool = false)
	{
		if (kill) return;
		flash.Lib.current.stage.addEventListener (flash.events.Event.ENTER_FRAME, onFrame_temp);
	}

	static function onFrame_temp (e)
	{
		var kc:Int = 0;
		while ((kc = pollKeys()) != -1)
		{

			flash.Lib.current.stage.dispatchEvent (
				new flash.events.KeyboardEvent (
				flash.events.KeyboardEvent.KEY_DOWN,
				true,
				false,
				kc,
				kc));
		}
	}

	public static function onFrame (e)
	{
		for (fld in Type.getClassFields (hxgl.vir.KeyCode))
		{
			var kc = Reflect.field (hxgl.vir.KeyCode,fld);
			var d:Bool = isDown (kc);
			
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
	}
}
#end
