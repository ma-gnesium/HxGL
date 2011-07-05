/*  Should render a green window
 */

package ;
import hxgl.core.HXGL;

class ClearOnly
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
        HXGL.clear (0.0,1.0,0.0,1.0,1.0,0,0);
    }

    public static function main ()
    {
        new ClearOnly ();
    }
}
