package hxgl.core;

class GLenums 
{
	public static inline var GL_ARRAY_BUFFER = 0x8892;
	public static inline var GL_ELEMENT_ARRAY_BUFFER = 0x8893;
	
	public static inline var GL_STREAM_DRAW = 0x88E0;
	public static inline var GL_STREAM_READ = 0x88E1;
	public static inline var GL_STREAM_COPY = 0x88E2;
	public static inline var GL_STATIC_DRAW = 0x88E4;
	public static inline var GL_STATIC_READ = 0x88E5;
	public static inline var GL_STATIC_COPY = 0x88E6;
	public static inline var GL_DYNAMIC_DRAW = 0x88E8;
	public static inline var GL_DYNAMIC_READ = 0x88E9;
	public static inline var GL_DYNAMIC_COPY = 0x88EA;
	
	public static inline var GL_POINTS = 0x0000;
	public static inline var GL_LINES = 0x0001;
	public static inline var GL_LINE_LOOP = 0x0002;
	public static inline var GL_LINE_STRIP = 0x0003;
	public static inline var GL_TRIANGLES = 0x0004;
	public static inline var GL_TRIANGLE_STRIP = 0x0005;
	public static inline var GL_TRIANGLE_FAN = 0x0006;
	public static inline var GL_QUADS = 0x0007;
	public static inline var GL_QUAD_STRIP = 0x0008;
	
	
	public static inline var GL_FLOAT = 0x1406;
	
	public static inline var GL_UNSIGNED_BYTE = 0x1401;
	public static inline var GL_UNSIGNED_SHORT = 0x1403;
	public static inline var GL_UNSIGNED_INT = 0x1405;
	
	
	public static inline var GL_RGBA = 0x1908;
	
	public static inline var GL_UNPACK_ALIGNMENT = 0x0CF5;
	
	public static inline var GL_TEXTURE_2D = 0x0DE1;
	public static inline var GL_TEXTURE_WRAP_S = 0x2802;
	public static inline var GL_TEXTURE_WRAP_T = 0x2803;
	public static inline var GL_REPEAT = 0x2901;
	public static inline var GL_TEXTURE_MAG_FILTER = 0x2800;
	public static inline var GL_TEXTURE_MIN_FILTER = 0x2801;
	public static inline var GL_NEAREST = 0x2600;
	public static inline var GL_LINEAR = 0x2601;
	public static inline var GL_TEXTURE_ENV = 0x2300;
	public static inline var GL_TEXTURE_ENV_MODE = 0x2200;
	public static inline var GL_DECAL = 0x2101;


	public static inline var _HINT_POSITION:Int = 0x01;
	public static inline var _HINT_NORMALS:Int = 0x02;
	public static inline var _HINT_COLOR:Int = 0x03;
	public static inline var _HINT_TEXCOORDS:Int = 0x04;
	
}

typedef GLenum = Int;
typedef GLint = Int;
typedef GLuint = Int;
typedef GLboolean = Bool;
typedef GLfloat = Float;
typedef GLsizei = Int;
