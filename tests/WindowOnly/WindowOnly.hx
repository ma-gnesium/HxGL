/* Shows a blank window and calls enter frame events
 *
 *
 */
 
package ;
import hxgl.core.HXGL;

class WindowOnly
{
    public function new ()
    {
	    HXGL.LINK_LIB ();
	    HXGL.setEnterFrame (testEnterFrame);
        HXGL.init ();
    }

    function testEnterFrame ()
    {
	    HXGL.setEnterFrame (eframe);
    }

    function eframe()
    {
        //Verify that enter frame functionality is implemented in extern/platforms/::platform_name::
        trace ("EnterFrame");       
    }

    public static function main ()
    {
        new WindowOnly ();
    }
}
