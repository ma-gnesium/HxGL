#ifndef INCLUDED_hxgl_core_GL
#define INCLUDED_hxgl_core_GL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxgl,core,GL)
namespace hxgl{
namespace core{


class GL_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GL_obj OBJ_;
		GL_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GL_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GL_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("GL"); }

		virtual Void viewport( int x,int y,int width,int height);
		Dynamic viewport_dyn();

		virtual Void clearColor( double red,double green,double blue,double alpha);
		Dynamic clearColor_dyn();

		virtual Void clear( int flags);
		Dynamic clear_dyn();

		virtual Void enable( Dynamic flag);
		Dynamic enable_dyn();

		virtual Void disable( Dynamic flag);
		Dynamic disable_dyn();

		virtual Void clearDepth( double depth);
		Dynamic clearDepth_dyn();

		virtual Dynamic createBuffer( );
		Dynamic createBuffer_dyn();

		virtual Void bindBuffer( Dynamic target,Dynamic buffer);
		Dynamic bindBuffer_dyn();

		virtual Void bufferData( Dynamic target,int size,Dynamic type);
		Dynamic bufferData_dyn();

		virtual Void bufferSubData( Dynamic target,int offset,int size,Dynamic data);
		Dynamic bufferSubData_dyn();

		virtual Void drawElements( Dynamic target,int num,Dynamic type,int offset);
		Dynamic drawElements_dyn();

		virtual Dynamic createProgram( );
		Dynamic createProgram_dyn();

		virtual Dynamic createShader( int type);
		Dynamic createShader_dyn();

		virtual Void shaderSource( Dynamic shader,::String code);
		Dynamic shaderSource_dyn();

		virtual Void compileShader( Dynamic shader);
		Dynamic compileShader_dyn();

		virtual Dynamic getShaderParameter( Dynamic shader,Dynamic param);
		Dynamic getShaderParameter_dyn();

		virtual Void deleteShader( Dynamic shader);
		Dynamic deleteShader_dyn();

		virtual Void attachShader( Dynamic program,Dynamic shader);
		Dynamic attachShader_dyn();

		virtual Void linkProgram( Dynamic program);
		Dynamic linkProgram_dyn();

		virtual Dynamic getProgramParameter( Dynamic program,Dynamic param);
		Dynamic getProgramParameter_dyn();

		virtual Void deleteProgram( Dynamic program);
		Dynamic deleteProgram_dyn();

		virtual Void useProgram( Dynamic program);
		Dynamic useProgram_dyn();

		virtual Dynamic getAttribLocation( Dynamic program,::String location);
		Dynamic getAttribLocation_dyn();

		virtual Void disableVertexAttribArray( Dynamic locindex);
		Dynamic disableVertexAttribArray_dyn();

		virtual Void enableVertexAttribArray( Dynamic locindex);
		Dynamic enableVertexAttribArray_dyn();

		virtual Void vertexAttribPointer( Dynamic locindex,int size,Dynamic type,bool normalize,int stride,int bufferOffset);
		Dynamic vertexAttribPointer_dyn();

		virtual Void cullFace( Dynamic flag);
		Dynamic cullFace_dyn();

		virtual Void depthMask( bool status);
		Dynamic depthMask_dyn();

		virtual Void depthFunc( Dynamic flag);
		Dynamic depthFunc_dyn();

		virtual Dynamic createTexture( );
		Dynamic createTexture_dyn();

		virtual Void bindTexture( Dynamic target,Dynamic texture);
		Dynamic bindTexture_dyn();

		virtual Void texParameteri( Dynamic target,Dynamic a,Dynamic b);
		Dynamic texParameteri_dyn();

		virtual int getUniformLocation( Dynamic program,::String location);
		Dynamic getUniformLocation_dyn();

		virtual Void uniformMatrix4fv( Dynamic locindex,bool transpose,Array< double > value);
		Dynamic uniformMatrix4fv_dyn();

		int DEPTH_BUFFER_BIT; /* REM */ 
		int STENCIL_BUFFER_BIT; /* REM */ 
		int COLOR_BUFFER_BIT; /* REM */ 
		int POINTS; /* REM */ 
		int LINES; /* REM */ 
		int LINE_LOOP; /* REM */ 
		int LINE_STRIP; /* REM */ 
		int TRIANGLES; /* REM */ 
		int TRIANGLE_STRIP; /* REM */ 
		int TRIANGLE_FAN; /* REM */ 
		int ZERO; /* REM */ 
		int ONE; /* REM */ 
		int SRC_COLOR; /* REM */ 
		int ONE_MINUS_SRC_COLOR; /* REM */ 
		int SRC_ALPHA; /* REM */ 
		int ONE_MINUS_SRC_ALPHA; /* REM */ 
		int DST_ALPHA; /* REM */ 
		int ONE_MINUS_DST_ALPHA; /* REM */ 
		int DST_COLOR; /* REM */ 
		int ONE_MINUS_DST_COLOR; /* REM */ 
		int SRC_ALPHA_SATURATE; /* REM */ 
		int FUNC_ADD; /* REM */ 
		int BLEND_EQUATION; /* REM */ 
		int BLEND_EQUATION_RGB; /* REM */ 
		int BLEND_EQUATION_ALPHA; /* REM */ 
		int FUNC_SUBTRACT; /* REM */ 
		int FUNC_REVERSE_SUBTRACT; /* REM */ 
		int BLEND_DST_RGB; /* REM */ 
		int BLEND_SRC_RGB; /* REM */ 
		int BLEND_DST_ALPHA; /* REM */ 
		int BLEND_SRC_ALPHA; /* REM */ 
		int CONSTANT_COLOR; /* REM */ 
		int ONE_MINUS_CONSTANT_COLOR; /* REM */ 
		int CONSTANT_ALPHA; /* REM */ 
		int ONE_MINUS_CONSTANT_ALPHA; /* REM */ 
		int BLEND_COLOR; /* REM */ 
		int ARRAY_BUFFER; /* REM */ 
		int ELEMENT_ARRAY_BUFFER; /* REM */ 
		int ARRAY_BUFFER_BINDING; /* REM */ 
		int ELEMENT_ARRAY_BUFFER_BINDING; /* REM */ 
		int STREAM_DRAW; /* REM */ 
		int STATIC_DRAW; /* REM */ 
		int DYNAMIC_DRAW; /* REM */ 
		int BUFFER_SIZE; /* REM */ 
		int BUFFER_USAGE; /* REM */ 
		int CURRENT_VERTEX_ATTRIB; /* REM */ 
		int FRONT; /* REM */ 
		int BACK; /* REM */ 
		int FRONT_AND_BACK; /* REM */ 
		int CULL_FACE; /* REM */ 
		int BLEND; /* REM */ 
		int DITHER; /* REM */ 
		int STENCIL_TEST; /* REM */ 
		int DEPTH_TEST; /* REM */ 
		int SCISSOR_TEST; /* REM */ 
		int POLYGON_OFFSET_FILL; /* REM */ 
		int SAMPLE_ALPHA_TO_COVERAGE; /* REM */ 
		int SAMPLE_COVERAGE; /* REM */ 
		int NO_ERROR; /* REM */ 
		int INVALID_ENUM; /* REM */ 
		int INVALID_VALUE; /* REM */ 
		int INVALID_OPERATION; /* REM */ 
		int OUT_OF_MEMORY; /* REM */ 
		int CW; /* REM */ 
		int CCW; /* REM */ 
		int LINE_WIDTH; /* REM */ 
		int ALIASED_POINT_SIZE_RANGE; /* REM */ 
		int ALIASED_LINE_WIDTH_RANGE; /* REM */ 
		int CULL_FACE_MODE; /* REM */ 
		int FRONT_FACE; /* REM */ 
		int DEPTH_RANGE; /* REM */ 
		int DEPTH_WRITEMASK; /* REM */ 
		int DEPTH_CLEAR_VALUE; /* REM */ 
		int DEPTH_FUNC; /* REM */ 
		int STENCIL_CLEAR_VALUE; /* REM */ 
		int STENCIL_FUNC; /* REM */ 
		int STENCIL_FAIL; /* REM */ 
		int STENCIL_PASS_DEPTH_FAIL; /* REM */ 
		int STENCIL_PASS_DEPTH_PASS; /* REM */ 
		int STENCIL_REF; /* REM */ 
		int STENCIL_VALUE_MASK; /* REM */ 
		int STENCIL_WRITEMASK; /* REM */ 
		int STENCIL_BACK_FUNC; /* REM */ 
		int STENCIL_BACK_FAIL; /* REM */ 
		int STENCIL_BACK_PASS_DEPTH_FAIL; /* REM */ 
		int STENCIL_BACK_PASS_DEPTH_PASS; /* REM */ 
		int STENCIL_BACK_REF; /* REM */ 
		int STENCIL_BACK_VALUE_MASK; /* REM */ 
		int STENCIL_BACK_WRITEMASK; /* REM */ 
		int VIEWPORT; /* REM */ 
		int SCISSOR_BOX; /* REM */ 
		int COLOR_CLEAR_VALUE; /* REM */ 
		int COLOR_WRITEMASK; /* REM */ 
		int UNPACK_ALIGNMENT; /* REM */ 
		int PACK_ALIGNMENT; /* REM */ 
		int MAX_TEXTURE_SIZE; /* REM */ 
		int MAX_VIEWPORT_DIMS; /* REM */ 
		int SUBPIXEL_BITS; /* REM */ 
		int RED_BITS; /* REM */ 
		int GREEN_BITS; /* REM */ 
		int BLUE_BITS; /* REM */ 
		int ALPHA_BITS; /* REM */ 
		int DEPTH_BITS; /* REM */ 
		int STENCIL_BITS; /* REM */ 
		int POLYGON_OFFSET_UNITS; /* REM */ 
		int POLYGON_OFFSET_FACTOR; /* REM */ 
		int TEXTURE_BINDING_2D; /* REM */ 
		int SAMPLE_BUFFERS; /* REM */ 
		int SAMPLES; /* REM */ 
		int SAMPLE_COVERAGE_VALUE; /* REM */ 
		int SAMPLE_COVERAGE_INVERT; /* REM */ 
		int NUM_COMPRESSED_TEXTURE_FORMATS; /* REM */ 
		int COMPRESSED_TEXTURE_FORMATS; /* REM */ 
		int DONT_CARE; /* REM */ 
		int FASTEST; /* REM */ 
		int NICEST; /* REM */ 
		int GENERATE_MIPMAP_HINT; /* REM */ 
		int BYTE; /* REM */ 
		int UNSIGNED_BYTE; /* REM */ 
		int SHORT; /* REM */ 
		int UNSIGNED_SHORT; /* REM */ 
		int INT; /* REM */ 
		int UNSIGNED_INT; /* REM */ 
		int FLOAT; /* REM */ 
		int DEPTH_COMPONENT; /* REM */ 
		int ALPHA; /* REM */ 
		int RGB; /* REM */ 
		int RGBA; /* REM */ 
		int LUMINANCE; /* REM */ 
		int LUMINANCE_ALPHA; /* REM */ 
		int UNSIGNED_SHORT_4_4_4_4; /* REM */ 
		int UNSIGNED_SHORT_5_5_5_1; /* REM */ 
		int UNSIGNED_SHORT_5_6_5; /* REM */ 
		int FRAGMENT_SHADER; /* REM */ 
		int VERTEX_SHADER; /* REM */ 
		int MAX_VERTEX_ATTRIBS; /* REM */ 
		int MAX_VERTEX_UNIFORM_VECTORS; /* REM */ 
		int MAX_VARYING_VECTORS; /* REM */ 
		int MAX_COMBINED_TEXTURE_IMAGE_UNITS; /* REM */ 
		int MAX_VERTEX_TEXTURE_IMAGE_UNITS; /* REM */ 
		int MAX_TEXTURE_IMAGE_UNITS; /* REM */ 
		int MAX_FRAGMENT_UNIFORM_VECTORS; /* REM */ 
		int SHADER_TYPE; /* REM */ 
		int DELETE_STATUS; /* REM */ 
		int LINK_STATUS; /* REM */ 
		int VALIDATE_STATUS; /* REM */ 
		int ATTACHED_SHADERS; /* REM */ 
		int ACTIVE_UNIFORMS; /* REM */ 
		int ACTIVE_ATTRIBUTES; /* REM */ 
		int SHADING_LANGUAGE_VERSION; /* REM */ 
		int CURRENT_PROGRAM; /* REM */ 
		int NEVER; /* REM */ 
		int LESS; /* REM */ 
		int EQUAL; /* REM */ 
		int LEQUAL; /* REM */ 
		int GREATER; /* REM */ 
		int NOTEQUAL; /* REM */ 
		int GEQUAL; /* REM */ 
		int ALWAYS; /* REM */ 
		int KEEP; /* REM */ 
		int REPLACE; /* REM */ 
		int INCR; /* REM */ 
		int DECR; /* REM */ 
		int INVERT; /* REM */ 
		int INCR_WRAP; /* REM */ 
		int DECR_WRAP; /* REM */ 
		int VENDOR; /* REM */ 
		int RENDERER; /* REM */ 
		int VERSION; /* REM */ 
		int NEAREST; /* REM */ 
		int LINEAR; /* REM */ 
		int NEAREST_MIPMAP_NEAREST; /* REM */ 
		int LINEAR_MIPMAP_NEAREST; /* REM */ 
		int NEAREST_MIPMAP_LINEAR; /* REM */ 
		int LINEAR_MIPMAP_LINEAR; /* REM */ 
		int TEXTURE_MAG_FILTER; /* REM */ 
		int TEXTURE_MIN_FILTER; /* REM */ 
		int TEXTURE_WRAP_S; /* REM */ 
		int TEXTURE_WRAP_T; /* REM */ 
		int TEXTURE_2D; /* REM */ 
		int TEXTURE; /* REM */ 
		int TEXTURE_CUBE_MAP; /* REM */ 
		int TEXTURE_BINDING_CUBE_MAP; /* REM */ 
		int TEXTURE_CUBE_MAP_POSITIVE_X; /* REM */ 
		int TEXTURE_CUBE_MAP_NEGATIVE_X; /* REM */ 
		int TEXTURE_CUBE_MAP_POSITIVE_Y; /* REM */ 
		int TEXTURE_CUBE_MAP_NEGATIVE_Y; /* REM */ 
		int TEXTURE_CUBE_MAP_POSITIVE_Z; /* REM */ 
		int TEXTURE_CUBE_MAP_NEGATIVE_Z; /* REM */ 
		int MAX_CUBE_MAP_TEXTURE_SIZE; /* REM */ 
		int TEXTURE0; /* REM */ 
		int TEXTURE1; /* REM */ 
		int TEXTURE2; /* REM */ 
		int TEXTURE3; /* REM */ 
		int TEXTURE4; /* REM */ 
		int TEXTURE5; /* REM */ 
		int TEXTURE6; /* REM */ 
		int TEXTURE7; /* REM */ 
		int TEXTURE8; /* REM */ 
		int TEXTURE9; /* REM */ 
		int TEXTURE10; /* REM */ 
		int TEXTURE11; /* REM */ 
		int TEXTURE12; /* REM */ 
		int TEXTURE13; /* REM */ 
		int TEXTURE14; /* REM */ 
		int TEXTURE15; /* REM */ 
		int TEXTURE16; /* REM */ 
		int TEXTURE17; /* REM */ 
		int TEXTURE18; /* REM */ 
		int TEXTURE19; /* REM */ 
		int TEXTURE20; /* REM */ 
		int TEXTURE21; /* REM */ 
		int TEXTURE22; /* REM */ 
		int TEXTURE23; /* REM */ 
		int TEXTURE24; /* REM */ 
		int TEXTURE25; /* REM */ 
		int TEXTURE26; /* REM */ 
		int TEXTURE27; /* REM */ 
		int TEXTURE28; /* REM */ 
		int TEXTURE29; /* REM */ 
		int TEXTURE30; /* REM */ 
		int TEXTURE31; /* REM */ 
		int ACTIVE_TEXTURE; /* REM */ 
		int REPEAT; /* REM */ 
		int CLAMP_TO_EDGE; /* REM */ 
		int MIRRORED_REPEAT; /* REM */ 
		int FLOAT_VEC2; /* REM */ 
		int FLOAT_VEC3; /* REM */ 
		int FLOAT_VEC4; /* REM */ 
		int INT_VEC2; /* REM */ 
		int INT_VEC3; /* REM */ 
		int INT_VEC4; /* REM */ 
		int BOOL; /* REM */ 
		int BOOL_VEC2; /* REM */ 
		int BOOL_VEC3; /* REM */ 
		int BOOL_VEC4; /* REM */ 
		int FLOAT_MAT2; /* REM */ 
		int FLOAT_MAT3; /* REM */ 
		int FLOAT_MAT4; /* REM */ 
		int SAMPLER_2D; /* REM */ 
		int SAMPLER_CUBE; /* REM */ 
		int VERTEX_ATTRIB_ARRAY_ENABLED; /* REM */ 
		int VERTEX_ATTRIB_ARRAY_SIZE; /* REM */ 
		int VERTEX_ATTRIB_ARRAY_STRIDE; /* REM */ 
		int VERTEX_ATTRIB_ARRAY_TYPE; /* REM */ 
		int VERTEX_ATTRIB_ARRAY_NORMALIZED; /* REM */ 
		int VERTEX_ATTRIB_ARRAY_POINTER; /* REM */ 
		int VERTEX_ATTRIB_ARRAY_BUFFER_BINDING; /* REM */ 
		int COMPILE_STATUS; /* REM */ 
		int LOW_FLOAT; /* REM */ 
		int MEDIUM_FLOAT; /* REM */ 
		int HIGH_FLOAT; /* REM */ 
		int LOW_INT; /* REM */ 
		int MEDIUM_INT; /* REM */ 
		int HIGH_INT; /* REM */ 
		int FRAMEBUFFER; /* REM */ 
		int RENDERBUFFER; /* REM */ 
		int RGBA4; /* REM */ 
		int RGB5_A1; /* REM */ 
		int RGB565; /* REM */ 
		int DEPTH_COMPONENT16; /* REM */ 
		int STENCIL_INDEX; /* REM */ 
		int STENCIL_INDEX8; /* REM */ 
		int DEPTH_STENCIL; /* REM */ 
		int RENDERBUFFER_WIDTH; /* REM */ 
		int RENDERBUFFER_HEIGHT; /* REM */ 
		int RENDERBUFFER_INTERNAL_FORMAT; /* REM */ 
		int RENDERBUFFER_RED_SIZE; /* REM */ 
		int RENDERBUFFER_GREEN_SIZE; /* REM */ 
		int RENDERBUFFER_BLUE_SIZE; /* REM */ 
		int RENDERBUFFER_ALPHA_SIZE; /* REM */ 
		int RENDERBUFFER_DEPTH_SIZE; /* REM */ 
		int RENDERBUFFER_STENCIL_SIZE; /* REM */ 
		int FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE; /* REM */ 
		int FRAMEBUFFER_ATTACHMENT_OBJECT_NAME; /* REM */ 
		int FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL; /* REM */ 
		int FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE; /* REM */ 
		int COLOR_ATTACHMENT0; /* REM */ 
		int DEPTH_ATTACHMENT; /* REM */ 
		int STENCIL_ATTACHMENT; /* REM */ 
		int DEPTH_STENCIL_ATTACHMENT; /* REM */ 
		int NONE; /* REM */ 
		int FRAMEBUFFER_COMPLETE; /* REM */ 
		int FRAMEBUFFER_INCOMPLETE_ATTACHMENT; /* REM */ 
		int FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT; /* REM */ 
		int FRAMEBUFFER_INCOMPLETE_DIMENSIONS; /* REM */ 
		int FRAMEBUFFER_UNSUPPORTED; /* REM */ 
		int FRAMEBUFFER_BINDING; /* REM */ 
		int RENDERBUFFER_BINDING; /* REM */ 
		int MAX_RENDERBUFFER_SIZE; /* REM */ 
		int INVALID_FRAMEBUFFER_OPERATION; /* REM */ 
		static Dynamic _viewport; /* REM */ 
		static Dynamic _clearColor; /* REM */ 
		static Dynamic _clear; /* REM */ 
		static Dynamic _enable; /* REM */ 
		static Dynamic _disable; /* REM */ 
		static Dynamic _clearDepth; /* REM */ 
		static Dynamic _createBuffer; /* REM */ 
		static Dynamic _bindBuffer; /* REM */ 
		static Dynamic _bufferData; /* REM */ 
		static Dynamic _bufferSubData; /* REM */ 
		static Dynamic _drawElements; /* REM */ 
		static Dynamic _createProgram; /* REM */ 
		static Dynamic _createShader; /* REM */ 
		static Dynamic _shaderSource; /* REM */ 
		static Dynamic _compileShader; /* REM */ 
		static Dynamic _getShaderParameter; /* REM */ 
		static Dynamic _deleteShader; /* REM */ 
		static Dynamic _attachShader; /* REM */ 
		static Dynamic _linkProgram; /* REM */ 
		static Dynamic _getProgramParameter; /* REM */ 
		static Dynamic _deleteProgram; /* REM */ 
		static Dynamic _useProgram; /* REM */ 
		static Dynamic _getAttribLocation; /* REM */ 
		static Dynamic _disableVertexAttribArray; /* REM */ 
		static Dynamic _enableVertexAttribArray; /* REM */ 
		static Dynamic _vertexAttribPointer; /* REM */ 
		static Dynamic _cullFace; /* REM */ 
		static Dynamic _depthMask; /* REM */ 
		static Dynamic _depthFunc; /* REM */ 
		static Dynamic _createTexture; /* REM */ 
		static Dynamic _bindTexture; /* REM */ 
		static Dynamic _texParameteri; /* REM */ 
		static Dynamic _getUniformLocation; /* REM */ 
		static Dynamic _uniformMatrix4fv; /* REM */ 
		static Dynamic l( ::String id,int p);
		static Dynamic l_dyn();

};

} // end namespace hxgl
} // end namespace core

#endif /* INCLUDED_hxgl_core_GL */ 
