package hxgl.vir;

class KeyRemap
{
	static var cb:String->Void;
	static var tf:flash.text.TextField;
	static var km:Hash<Int>;
	static var s:Array<String>;
	public static function constructNamedMap (_cb:String->Void, _s:Array<String>)
	{
		cb = _cb;
		km = new Hash ();
		s = _s;
		tf = new flash.text.TextField ();
		tf.textColor = 0x999999;
		tf.width = 800;
		tf.height = 800;
		flash.Lib.current.stage.addChild (tf);
		keyDown (null);
		flash.Lib.current.stage.addEventListener (flash.events.KeyboardEvent.KEY_DOWN, keyDown);
	}

	static function keyDown (e)
	{
		if (e!=null)
		{
			var id = s.shift ();
			km.set (id, e.keyCode);
		}
		if (s.length == 0)
		{
			flash.Lib.current.stage.removeEventListener (flash.events.KeyboardEvent.KEY_DOWN, keyDown);

			var h:String = "";
			h += "
package hxgl.vir;					//Leave formatted like this for proper export format
class __KEYCODE__ extends hxgl.vir.KeyMap {
 public function new (){
 super ();
";
			for (fld in km.keys())
			{	
				var tfld = fld;
				switch (tfld)
				{	
					case "\\":
						tfld = "\\\\";
					case "\"":
						tfld = "\\\"";
				}
				h += "  keys.set (\""+tfld+"\","+km.get(fld)+");\n";
			}
			h+= "
 }
}";
			tf.text = h;
			cb(h);
		}
		else
		{				
			tf.text = "Press: " + s[0];
		}
	}

	public static var fullKBID:Array<String> = 
	[
		"esc","F1","F2","F3","F4","F5","F6","F7","F8","F9","F10","F11","F12","PAUSE","DELETE",
		"`","1","2","3","4","5","6","7","8","9","0","-","=","BACKSPACE",
		"tab","q","w","e","r","t","y","u","i","o","p","[","]","\\",
		"a","s","d","f","g","h","j","k","l",":","'","ENTER",
		"LSHIFT","z","x","c","v","b","n","m","<",">","/",
		"LCTRL","LALT","SPACE",
		"LEFT","UP","RIGHT","DOWN",
		"HOME","PGUP","PGDN","END",
	];
}
