/*  Should render a red window
 */

package ;

class ClearOnly
{
    public function new ()
    {
        trace ("Begin init");

        //@@ Context creation, not abstracted yet
        #if js
        var canvas:Dynamic = js.Lib.document.getElementById( "webGLCanvas" );
        if (null == canvas) throw "Could not aquire canvas";
        var gl:hxgl.core.GL = canvas.getContext ("experimental-webgl");
        if (null == gl) throw "Could not aquire context";
        #elseif cpp
            cpp.Lib.load("gl","__HXGL_INIT",0)();
            var flip = cpp.Lib.load("gl","__HXGL_HANDLEFRAME",0);
            var gl:hxgl.core.GL = new hxgl.core.GL ();
        #end
        
        gl.clearColor (1.0, 0.0, 0.0, 1.0);
        gl.clear (gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);

        #if cpp
            flip ();    //swapBuffers call
            while (true){}  //This will cause a hang! Sorry! Still need to do Context abstraction
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
