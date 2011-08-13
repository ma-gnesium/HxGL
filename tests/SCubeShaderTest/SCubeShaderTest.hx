/* GL 2.0+ Squished version of SCubeTest
 * GL 1.5+ Same as SCubeTest
 */

package ;
import hxgl.core.HXGL;

class SCubeShaderTest
{
    public function new ()
    {
	    HXGL.LINK_LIB ();
	    trace ("Post link");
	    HXGL.setEnterFrame (testEnterFrame);
	    trace ("Post SEF");
        HXGL.init ();
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

    static inline var vshader:String = 
    "#version 110\n" +
    "attribute vec3 in_Position;\n" +
    "varying vec3 pass_Position;\n" +
    "void main(void)\n" +
    "{\n" +
    "   gl_Position = vec4(in_Position.x*2.0, in_Position.y * .5, in_Position.z, 1.0);\n" +
    "   pass_Position = in_Position;"+
    "}\n";

    static inline var fshader:String = 
    "#version 110\n" +
    "varying vec3 pass_Position;\n" +
    "void main(void)\n" +
    "{\n" +
    "   gl_FragColor = vec4 (pass_Position,1.0);\n" +
    "}\n";

    var vertexData:haxe.io.BytesData;
    var indexData:haxe.io.BytesData;

    var vboID:Int;
    var iboID:Int;

    var programID:Int;

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
    
        programID = HXGL.createProgram ();
        trace ("programID: " + programID);
        HXGL.uploadProgram (programID, vshader, fshader);
       
	    HXGL.setEnterFrame (eframe);
    }

    function eframe()
    {
        HXGL.setVertexBufferAt ("in_Position", vboID, 0, 12, "float3" ); //location,vboID,offset,stride,type
        HXGL.setProgram (programID);

        HXGL.drawTriangles (iboID, 0, Std.int(indexData.length*.5/3));

        HXGL.setProgram (0);
        HXGL.setVertexBufferAt (null, vboID, 0, 12, "float3");  //clear state
    }

    public static function main ()
    {
        new SCubeShaderTest ();
    }
}















