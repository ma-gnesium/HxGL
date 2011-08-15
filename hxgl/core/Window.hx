package hxgl.core;
import hxgl.display3D.Context3D;

class Window
{
	static var initialized:Bool = false;
	#if flash
	static var stages:Int = 0;
	#end
	public static function create( cb:Window->Void, id:String, ?width:Int = 800, ?height:Int = 600 ):Void
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
			cb (new Window (canvas));
		#elseif cpp
			if ( !initialized )
			{
				C_init( );
				//IMPORTANT! Do NOT set initialized to true here!
			}
			var handle = C_createWindow( id, width, height, true );			
			cb (new Window ( handle ));
		#elseif flash
			var s:flash.display.Stage3D = flash.Lib.current.stage.stage3Ds[0];
			s.visible = true;
			//FIXME This will cause all sorts of problems since context is re-created sometimes
			s.addEventListener( flash.events.Event.CONTEXT3D_CREATE, function (e)
			{
				var st = e.target;
				st.context3D.configureBackBuffer( width, height, 0, false );
				st.context3D.setDepthTest( true, flash.display3D.Context3DCompareMode.LESS_EQUAL );
				st.context3D.setCulling(flash.display3D.Context3DTriangleFace.BACK);
				cb( new Window( cast e.target ) );
			});
			s.requestContext3D();
		#end
	}
	
	#if js
		var _canvas:Dynamic;
		function new( canvas:Dynamic )
		{
			_canvas = canvas;
			gl = _canvas.getContext( "experimental-webgl" );
			if (null == gl) throw "Could not aquire context";
			cross = new hxgl.cross.gl.Context( this );
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
			return null != _canvas;
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
			cross = new hxgl.cross.gl.Context( this );
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
	#elseif flash
	
		var _stage3D:flash.display.Stage3D;
		function new( stage3D:flash.display.Stage3D )
		{
			_stage3D = stage3D;
			display3D = _stage3D.context3D;
			cross = new hxgl.cross.flash.Context( this );
			assertActive( );
		}
		
		public function process( )
		{
			assertActive( );
			display3D.present( );
		}
		public function activate( )
		{
			active = this;
		}
		public function resize( width:Int, height:Int )
		{
			assertActive( );
			display3D.enableErrorChecking = true;
			display3D.configureBackBuffer( width, height, 0, true );
		}
		public function position( x:Int, y:Int )
		{
			assertActive( );
			_stage3D.x = x;
			_stage3D.y = y;
		}
		
		//FIXME Improper close, should not dispose assets.
		public function close( )
		{
			cv( );
			assertActive( );
			display3D.dispose( );
			_stage3D = null;
		}
		
		public function isOpen( )
		{
			return null != _stage3D;
		}
		
		function cv( )
		{
			if (null == _stage3D) throw "Invalid handle";
		}
	#end
	
	function assertActive( )
	{
		if (this != active) activate( );
	}
	#if (cpp||js)
	public var gl:hxgl.core.GL;
	#elseif flash
	public var display3D:flash.display3D.Context3D;
	#end
	public var cross:hxgl.cross.IContext;
	public static var active:Window;
}