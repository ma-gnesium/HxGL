/*  Should render a red window
 */

package ;

class ClearOnly
{
    public function new ()
    {
        trace ("Begin init");
        //@@ Context creation, not abstracted yet
				
				var wa = hxgl.core.Window.create( "TestA", 800, 600 );
				var wb = hxgl.core.Window.create( "TestB", 512, 512 );
				wb.resize( 100, 100 );
				
				wa.activate( );
				wa.position( 0, 0 );
				wb.activate( );
				wb.position( 100, 100 );
				
				var opened:Bool = false;
				#if cpp
				do {
				#end
					opened = false;
					if (wa.isOpen( ))
					{
						wa.activate( );
						wa.gl.clearColor( 1.0, 0.0, 0.0, 1.0 );
						wa.gl.clear( wa.gl.COLOR_BUFFER_BIT );
						wa.process( );
					}
					
					if (wb.isOpen( ))
					{
						wb.activate( );
						wb.gl.clearColor( 0.0, 1.0, 0.0, 1.0 );
						wb.gl.clear( wb.gl.COLOR_BUFFER_BIT );
						wb.process( );
					}
					
				#if cpp
					cpp.Sys.sleep( 1 / 60 );					
				} while ( wa.isOpen( ) || wb.isOpen( ) );
				#else
					//wb.close( );		//Sample of close behavior in javascript
				#end
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
