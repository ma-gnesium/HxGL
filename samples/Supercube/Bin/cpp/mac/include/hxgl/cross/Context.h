#ifndef INCLUDED_hxgl_cross_Context
#define INCLUDED_hxgl_cross_Context

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxgl,core,GL)
HX_DECLARE_CLASS2(hxgl,cross,Context)
HX_DECLARE_CLASS3(hxgl,cross,data,IndexBuffer)
HX_DECLARE_CLASS3(hxgl,cross,data,Program)
HX_DECLARE_CLASS3(hxgl,cross,data,VertexBuffer)
namespace hxgl{
namespace cross{


class Context_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context_obj OBJ_;
		Context_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Context_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Context_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Context"); }

		static Void init( Dynamic cb);
		static Dynamic init_dyn();

		static Void move( double x,double y);
		static Dynamic move_dyn();

		static Void clear( Dynamic r,Dynamic g,Dynamic b,Dynamic a,Dynamic d,Dynamic m);
		static Dynamic clear_dyn();

		static Void setCulling( ::String triangleFaceToCull);
		static Dynamic setCulling_dyn();

		static Void setDepthTest( bool depthMask,::String passCompareMode);
		static Dynamic setDepthTest_dyn();

		static Void configureBackBuffer( int width,int height,int aa);
		static Dynamic configureBackBuffer_dyn();

		static ::hxgl::cross::data::VertexBuffer createVertexBuffer( int numVertices,int data32PerVertex);
		static Dynamic createVertexBuffer_dyn();

		static ::hxgl::cross::data::IndexBuffer createIndexBuffer( int numIndices);
		static Dynamic createIndexBuffer_dyn();

		static Void drawTriangles( ::hxgl::cross::data::IndexBuffer indexBuffer,Dynamic firstIndex,Dynamic numTriangles);
		static Dynamic drawTriangles_dyn();

		static Void setVertexBufferAt( ::String index,::hxgl::cross::data::VertexBuffer buffer,int bufferOffset,::String format);
		static Dynamic setVertexBufferAt_dyn();

		static Void __GL__setMatrix( ::String loc,bool transpose,Array< double > mat);
		static Dynamic __GL__setMatrix_dyn();

		static ::hxgl::cross::data::Program createProgram( );
		static Dynamic createProgram_dyn();

		static Void setProgram( ::hxgl::cross::data::Program program);
		static Dynamic setProgram_dyn();

		static Void present( );
		static Dynamic present_dyn();

		static Dynamic _init; /* REM */ 
		static Dynamic _init_window; /* REM */ 
		static Dynamic _create_window; /* REM */ 
		static Dynamic _handle_frame; /* REM */ 
		static Dynamic l( ::String id,int p);
		static Dynamic l_dyn();

		static ::hxgl::core::GL gl; /* REM */ 
		static int __program; /* REM */ 
};

} // end namespace hxgl
} // end namespace cross

#endif /* INCLUDED_hxgl_cross_Context */ 
