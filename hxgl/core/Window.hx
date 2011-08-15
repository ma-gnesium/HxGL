package hxgl.core;

class Window
{
	public static var initialized:Bool = false;
	public static function create( id:String, ?width:Int = 800, ?height:Int = 600 ):Window
	{
		#if js
			var canvas:Dynamic = js.Lib.document.getElementById( "hxgl-" + id );
			if (null == canvas)
			{
				canvas = js.Lib.document.createElement("canvas");
				canvas.setAttribute('width', width);
				canvas.setAttribute('height', height);
				canvas.setAttribute('id', "hxgl-"+id);
				js.Lib.document.body.appendChild(canvas);
				
				canvas = js.Lib.document.getElementById( "hxgl-" + id );
				if (null == canvas) throw "Unable to create context";
			}		
			return new Window (canvas);
		#elseif cpp
			if ( !initialized )
			{
				C_init( );
				//IMPORTANT! Do NOT set initialized to true here!
			}
			var handle = C_createWindow( id, width, height, true );			
			return new Window ( handle );
		#end
	}
	
	#if js
		var _canvas:Dynamic;
		function new( canvas:Dynamic )
		{
			_canvas = canvas;
			gl = _canvas.getContext( "experimental-webgl" );
			if (null == gl) throw "Could not aquire context";
			assertActive( );
		}
		
		public function process( )
		{
			assertActive( );
		}
		public function activate( )
		{
			active = this;
		}
		public function resize( width:Int, height:Int )
		{
			assertActive( );
			_canvas.setAttribute('width', width);
			_canvas.setAttribute('height', height);
		}
		public function position( x:Int, y:Int )
		{
			assertActive( );
			_canvas.setAttribute('style', 'position: absolute; left: ' + x + 'px; top:' + y + 'px;');
		}
		
		public function close( )
		{
			cv( );
			assertActive( );
			js.Lib.document.body.removeChild(_canvas);
			_canvas = null;
		}
		
		public function isOpen( )
		{
			return _canvas != 0;
		}
		
		function cv( )
		{
			if (null == _canvas) throw "Invalid handle";
		}
		
	#elseif cpp
	
		var _handle:Int;
		function new( handle:Int )
		{
			if (!initialized)
			{
				C_initFirstWindow( );
				initialized = true;
			}
			_handle = handle;
			gl = new GL( );
			assertActive( );
		}
		
		public function process( )
		{
		  cv( );
			assertActive( );
			if (!C_process( ))
			{
				close( );
			}
		}
		public function activate( )
		{
			cv( );
			C_activeWindow( _handle );
			active = this;
			if (this != active) trace ("not active");
		}
		public function resize( width:Int, height:Int )
		{
			cv( );
			assertActive( );
			C_resizeWindow( width, height );
		}
		public function position( x:Int, y:Int )
		{
			cv( );
			assertActive( );
			C_positionWindow( x, y );
		}
		
		public function close( )
		{
			cv( );
			assertActive( );
			C_closeWindow( );
			_handle = 0;
		}
		public function isOpen( )
		{
			return _handle != 0;
		}
		
		function cv( )
		{
			if (0 == _handle) throw "Invalid handle";
		}
		
		static var C_init:Dynamic = l("__HXGL_INIT", 0);
		static var C_createWindow:Dynamic = l("__HXGL_createWindow", 4);
		static var C_initFirstWindow:Dynamic = l("__HXGL_INIT_WINDOW", 0);	//Setup glew
		static var C_process:Dynamic = l("__HXGL_HANDLEFRAME", 0);
		static var C_activeWindow:Dynamic = l("__HXGL_activeWindow", 1);
		static var C_closeWindow:Dynamic = l("__HXGL_closeWindow", 0);
		static var C_resizeWindow:Dynamic = l("__HXGL_resizeWindow", 2);
		static var C_positionWindow:Dynamic = l("__HXGL_positionWindow", 2);
		static function l(name:String, params:Int) return cpp.Lib.load("gl", name, params)
	#end
	
	function assertActive( )
	{
		if (this != active) activate( );
	}
	public var gl:GL;
	public static var active:Window;
}