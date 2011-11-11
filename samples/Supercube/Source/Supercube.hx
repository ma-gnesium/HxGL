package ;

import hxgl.cross.Context;
import hxgl.shaders.NormalWriter;
import hxgl.cross.data.VertexBuffer;
import hxgl.cross.data.IndexBuffer;
import hxgl.shaders.MVPFun;

class Supercube {
	function new () {

		Context.configureBackBuffer (512, 512, 4);

		_shader = new MVPFun ();

		var sc = SuperCubeGenerator.subDivideCube3D (0, 0, 0, 1, 10);

		var verts:Int = Std.int (sc.v.length/3);

		vb = Context.createVertexBuffer (verts, 3);

		ib = Context.createIndexBuffer (sc.i.length);

		ang = 0;

		vb.upload (
			sc.v
		,0,verts);

		ib.upload (sc.i,0,sc.i.length);


		#if cpp
		while (true)
		{
			update ();
			cpp.Sys.sleep(33/1000);
		}
		#else
		var t = new haxe.Timer(33);
		t.run = update;
		#end
		
	}

	var ang:Float;
	function update () {
		Context.clear(0, 0, 0, 1);

		ang += 4;
		ang = ang % 360;

		//SHADER STUFf	
		var fov:Float = 90;
		var ratio:Float = 1;
		var zFar:Float = 1000;
		var zNear:Float = .01;

		//INTERNAL
		var scale = Math.tan(fov * Math.PI / 360);
		var m11 = scale;
		var m22 = -scale * ratio;
		var m33 = zFar / (zNear - zFar);
		var m34 = -1;
		var m43 = (zNear * zFar) / (zNear - zFar);

		var rang:Float = ang * (Math.PI/180);

		var c = Math.cos (rang);
		var s = Math.sin (rang);

		//SHADER STUFf	
		_shader.init ({
			model:[
				c, 0, s, 0,
				0, 1, 0, 0,
				-s, 0, c, 0,
				0, 0, 0, 1.0,
			],
			view:[
				1, 0, 0, 0,
				0, 1, 0, 0,
				0, 0, 1, 0,
				0, 0, -.7, 1.0,
			],
			proj:[
				m11, 0, 0, 0,
				0, m22, 0, 0,
				0, 0, m33, m34,
				0, 0, m43, 1.0,
			],
		},{});

		_shader.bind (vb);

		Context.drawTriangles (ib);

		Context.present();
	}

	static function main ( ) {
		Context.init (function () {
			new Supercube ();
		});
	}

	var _shader:MVPFun;
	var vb:VertexBuffer;
	var ib:IndexBuffer;
}