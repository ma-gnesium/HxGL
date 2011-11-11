package ;

import hxgl.cross.Context;
import hxgl.shaders.NormalWriter;

class PulsingTriangle {
	function new () {

		Context.configureBackBuffer (512, 512, 4);

		_shader = new hxgl.shaders.NormalWriter ();
		_ct = 0.0;

		//Context.move (0, 0);

		var t = new haxe.Timer (33);
		t.run = update;


		#if cpp
		while (true)
		{
			update ();
			cpp.Sys.sleep(33/1000);
		}
		#end
	}

	function update () {
		_ct += .05;

		Context.clear(0, 0, 0, 1);

		var vb = Context.createVertexBuffer (3, 6);
		var ib = Context.createIndexBuffer (3);


		vb.upload ([
			0.0, 0.0, .5,   1.0, 0.0, 0.0,
			1.0, 0.0, .5,	0.0, 1.0, 0.0,
			0.0, 1.0, .5,	0.0, 0.0, 1.0
		],0,3);
		ib.upload ([0,1,2],0,3);

		var dst:Float = Math.sin (_ct);

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
		_shader.init ({
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

		_shader.bind (vb);

		Context.drawTriangles(ib);

		Context.present();
	}

	static function main ( ) {
		Context.init (function () {
			new PulsingTriangle ();
		});
	}

	var _shader:NormalWriter;
	var _ct:Float;
}