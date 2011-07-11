package ;
import haxe.io.BytesData;
import haxe.io.BytesOutput;

import flash.display.Stage3D;
import flash.display3D.Context3DVertexBufferFormat;
import flash.display3D.IndexBuffer3D;
import flash.display3D.Program3D;
import flash.display3D.VertexBuffer3D;
import flash.geom.Rectangle;
import flash.display3D.Context3D;
import flash.events.Event;
import flash.Lib;

/**
 * ...
 * @author Matthew Spencer
 */

class Main 
{

	static function main() 
	{
		#if !flash
			Lib.init (function (e) {new Main();});		//Blocking function, do not write code after this
		#end
	}
	
	var stage3D:Stage3D;
	var context3D:Context3D;
	private function new ()
	{
		stage3D = Lib.stage.stage3Ds[0];
		stage3D.addEventListener (Event.CONTEXT3D_CREATE, initialize);		
		stage3D.viewPort = new Rectangle (0, 0, 512, 512);
		stage3D.requestContext3D ();
	}
	
	var vbo:VertexBuffer3D;
	var ibo:IndexBuffer3D;
	var program:Program3D;
	private function initialize (e:Event)
	{
		context3D = stage3D.context3D;
		if (null == context3D) throw "context3D is null";
		
		context3D.configureBackBuffer (512, 512, 0, true);
		
		var t:BytesOutput;
		vbo = context3D.createVertexBuffer (3, 3);
		ibo = context3D.createIndexBuffer (3);
		
		var bo:BytesOutput = new BytesOutput ();
		for (i in [
			0.0, 0.0, 0.5,
			1.0, 0.0, 0.5,
			0.0, 1.0, 0.5
		]) bo.writeFloat (i);
		vbo.uploadFromByteArray (bo.getBytes ().getData (), 0, 0, 3);
		
		var bo:BytesOutput = new BytesOutput ();
		for (i in [0,1,2]) bo.writeInt16 (i);
		ibo.uploadFromByteArray (bo.getBytes ().getData (), 0, 0, 3);
		
		program = context3D.createProgram ();		
		#if !flash
		program.upload (vshader, fshader);
		#end		
		context3D.setProgram (program);	
		
		Lib.stage.addEventListener (Event.ENTER_FRAME, onEnterFrame);
	}
	
	private function onEnterFrame (e:Event)
	{		
		context3D.clear ( 0.4, 0.6, 0.9, 0.0, 0, 0);
		
		context3D.setVertexBufferAt (0, vbo, 0, Context3DVertexBufferFormat.FLOAT_3);
		context3D.drawTriangles (ibo, 0, 1);
	}
	
	#if !flash
	static inline var vshader:String = 
    "#version 110\n" +
    "attribute vec3 in_Position;\n" +
    "varying vec3 pass_Position;\n" +
    "void main(void)\n" +
    "{\n" +
    "   gl_Position = vec4(in_Position.x, in_Position.y, in_Position.z, 1.0);\n" +
    "   pass_Position = in_Position;"+
    "}\n";

    static inline var fshader:String = 
    "#version 110\n" +
    "varying vec3 pass_Position;\n" +
    "void main(void)\n" +
    "{\n" +
    "   gl_FragColor = vec4 (pass_Position,1.0);\n" +
    "}\n";
	#end
}










