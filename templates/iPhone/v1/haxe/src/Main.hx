/* Shows four cubes in a square shape in middle of screen.
 *  (Only works in the fixed function pipeline)
 */


package ;
import hxgl.core.HXGL;

class Main
{
    public function new ()
    {
	    HXGL.LINK_LIB ();
	    trace ("Post link");
	    HXGL.setEnterFrame (testEnterFrame);
	    trace ("Post SEF");
		//HXGL.configureBackBuffer (320,480, 0, false);
        HXGL.init (1,5);        //Force GL version
        trace ("Post init");
    }

    static var vertices:Array<Float> = [
        -1.0, 1.0, 0.0,
	    -1.0,-1.0, 0.0,
	     1.0,-1.0, 0.0,
	     1.0, 1.0, 0.0
    ];
    static var colors:Array<Float> = [
        1.0, 0.0, 0.0, 1.0,
        1.0, 1.0, 0.0, 1.0,
        1.0, 0.0, 1.0, 1.0,
        1.0, 1.0, 1.0, 1.0
    ];
    static var indices:Array<Int> = [0,1,2,0,2,3];

    var vertexData:haxe.io.BytesData;
    var indexData:haxe.io.BytesData;

    var vboID:Int;
    var iboID:Int;

    function testEnterFrame ()
    {
        trace ("setup");
        var sdata = SuperCube.subDivideCube3D (0, 0, 0, .5, 2);
        
        var b = new haxe.io.BytesOutput ();
        for (v in sdata.v) b.writeFloat(v);
        vertexData = b.getBytes().getData();

        var b = new haxe.io.BytesOutput ();
        for (i in sdata.i) b.writeUInt16(i);
        indexData = b.getBytes().getData();

        trace ("Pre vbo create");
        vboID = HXGL.createVertexBuffer (vertexData.length);
        trace ("Post vbo create");
        
        HXGL.uploadFromByteArrayVertex (vboID, vertexData, 0, 0, vertexData.length);
        trace ("Post vbo upload");
       
        iboID = HXGL.createIndexBuffer (indexData.length);
        HXGL.uploadFromByteArrayIndex (iboID, indexData, 0, 0, indexData.length);
        trace ("Post buffer binds");
    
       
	    HXGL.setEnterFrame (eframe);
    }

    function eframe()
    {
        HXGL.setVertexBufferAt (1, vboID, 0, "float3", "position");

        HXGL.drawTriangles (iboID, 0, Std.int(indexData.length*.5/3));

        HXGL.setVertexBufferAt (1, 0, 0, "float3", "position");  //clear state
    }

    public static function main ()
    {
        new Main ();
    }
}















