package hxgl.display3D;

#if flash
	typedef Context3DVertexBufferFormat = flash.display3D.Context3DVertexBufferFormat;
#else
	enum Context3DVertexBufferFormat {
		BYTES_4;
		FLOAT_1;
		FLOAT_2;
		FLOAT_3;
		FLOAT_4;
	}
#end
