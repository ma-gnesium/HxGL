package hxgl.display3D;

#if flash
	typedef Context3DVertexBufferFormat = flash.display3D.Context3DVertexBufferFormat;
#else
	class Context3DVertexBufferFormat
	{
		public static var BYTES_4 = "bytes4";
		public static var FLOAT_1 = "float1";
		public static var FLOAT_2 = "float2";
		public static var FLOAT_3 = "float3";
		public static var FLOAT_4 = "float4";
	}
#end
