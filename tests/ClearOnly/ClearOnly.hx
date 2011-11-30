/*  Should render a green window
 */

package ;
import hxgl.cross.Context;

class ClearOnly
{
    public function new ()
    {
        Context.configureBackBuffer (100, 100, 0);
        Context.move (5, 5);
        
                var t = new haxe.Timer (1000);
        t.run = update;
    }

    function update ()
    {
        Context.clear (Math.random(),0.0,0.0,1.0);
        Context.present ();
    }

    public static function main ()
    {
        Context.init (function () new ClearOnly ());
    }
}