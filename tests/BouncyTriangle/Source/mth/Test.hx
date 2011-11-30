package mth;

import hxgl.cross.Context;

class Test {
	var shader:hxgl.shaders.NormalWriter;

	function new() {
		Context.init (onReady);
		ct = 0;
	}

	function onReady( ) {
		Context.configureBackBuffer( 400, 400, 4 );

		shader = new hxgl.shaders.NormalWriter ();

		Context.move (100, 100);

		//haxe.Timer.delay (update, 1000);
		var t = new haxe.Timer (33);
		t.run = update;
	}

	var ct:Float;
	function update() {
		ct += .05;

		Context.clear(0, 0, 0, 1);

		var out = createCube (1,1,1);
		var vb = untyped out.vb.vb;
		var ib = out.ib;

		var vb = Context.createVertexBuffer (3, 6);
		var ib = Context.createIndexBuffer (3);


		vb.upload ([
			0.0, 0.0, .5,   1.0, 0.0, 0.0,
			1.0, 0.0, .5,	0.0, 1.0, 0.0,
			0.0, 1.0, .5,	0.0, 0.0, 1.0
		],0,3);
		ib.upload ([0,1,2],0,3);

		var dst:Float = Math.sin (ct);

		var fov:Float = 90;
		var ratio:Float = 4/3;
		var zFar:Float = 1000;
		var zNear:Float = 1;

		//INTERNAL
		var scale = Math.tan(fov * Math.PI / 360);
		var m11 = scale;
		var m22 = -scale * ratio;
		var m33 = zFar / (zNear - zFar);
		var m34 = -1;
		var m43 = (zNear * zFar) / (zNear - zFar);

		//SHADER STUFf	
		shader.init ({
			mview:[
				1, 0, 0, 0,
				0, 1, 0, 0,
				0, 0, 1, 0,
				0, 0, -5 + dst*3, 1.0,
			],
			proj:[
				m11, 0, 0, 0,
				0, m22, 0, 0,
				0, 0, m33, m34,
				0, 0, m43, 1.0,
			],
		},{});
		shader.bind (vb);

		Context.drawTriangles(ib);
		Context.present();
	}

	public static function main() {
		var inst = new Test();
	}


	public static function createCube (x:Float, y:Float, z:Float) {

		var vb = Context.createVertexBuffer (8, 3);

		vb.upload ([
			0, 0, 0,
			x, 0, 0,
			0, y, 0,
			0, 0, z,
			x, y, 0,
			x, 0, z,
			0, y, z,
			x, y, z,
		], 0, 8);

		var ib = Context.createIndexBuffer (36);

		ib.upload ([
			0, 1, 5,
			0, 5, 3,
			1, 4, 7,
			1, 7, 5,
			3, 5, 7,
			3, 7, 6,
			0, 6, 2,
			0, 3, 6,
			2, 7, 4,
			2, 6, 7,
			0, 4, 1,
			0, 2, 4,
		], 0, 36);

		return {vb:vb, ib:ib};
	}

}