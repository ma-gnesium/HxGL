package ;

import hxgl.cross.Context;
import hxgl.shaders.NormalWriter;
import hxgl.cross.data.VertexBuffer;
import hxgl.cross.data.IndexBuffer;
import hxgl.shaders.White;

class SimpleTriangle {
	function new () {

		Context.configureBackBuffer (512, 512, 4);

		
		_shader = new White ();

		vb = Context.createVertexBuffer (3, 3);

		trace( "VB done" );

		ib = Context.createIndexBuffer (3);

		trace( "IB done" );


		vb.upload ([
			0.0, 0.0, .5,
			1.0, 0.0, .5,
			0.0, 1.0, .5,
		],0,3);

		ib.upload ([0,1,2],0,3);


		while (true)
		{
			update ();
			cpp.Sys.sleep(33/1000);
		}
		
	}

	function update () {
		Context.clear(Math.random(), 0, 0, 1);

		//SHADER STUFf	
		_shader.init ({},{});

		_shader.bind (vb);

		Context.drawTriangles (ib);

		Context.present();
	}

	static function main ( ) {
		Context.init (function () {
			new SimpleTriangle ();
		});
	}

	var _shader:White;
	var vb:VertexBuffer;
	var ib:IndexBuffer;
}