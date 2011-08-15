/**
* @haxe -swf-header 400:300:30 -swf bin.output.swf
*/

/*  Should render a red window
 */
package ;

import hxgl.core.Window;

class ClearOnly
{
    public function new ()
    {				
				Window.create( function (wnd) {
					trace( "Window creation successful" );
					
					wnd.cross.clear(1.0);
					wnd.cross.present( );
					wnd.position( 100, 100 );
					
					#if cpp
						//Just to keep the program from closing
						cpp.Sys.sleep( 1 / 60 );
						while ( wnd.isOpen( ) ) {						
							wnd.process( );
						}
					#end
				}, "MyWindow", 512, 512 );
				
				return;
	}

	public static function main ()
	{
			#if js
					js.Lib.setErrorHandler(
							function (e,s) {
									throw "" + e + s;
									return true;
							});
			#end
			new ClearOnly ();
	}
}
