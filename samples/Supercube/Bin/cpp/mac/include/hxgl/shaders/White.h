#ifndef INCLUDED_hxgl_shaders_White
#define INCLUDED_hxgl_shaders_White

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxgl,cross,data,Program)
HX_DECLARE_CLASS3(hxgl,cross,data,VertexBuffer)
HX_DECLARE_CLASS2(hxgl,shaders,White)
namespace hxgl{
namespace shaders{


class White_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef White_obj OBJ_;
		White_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< White_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~White_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("White"); }

		virtual Void init( Dynamic vertex,Dynamic fragment);
		Dynamic init_dyn();

		virtual Void bind( ::hxgl::cross::data::VertexBuffer vbuffer);
		Dynamic bind_dyn();

		::hxgl::cross::data::Program __program; /* REM */ 
		static ::String vertex; /* REM */ 
		static ::String fragment; /* REM */ 
};

} // end namespace hxgl
} // end namespace shaders

#endif /* INCLUDED_hxgl_shaders_White */ 
