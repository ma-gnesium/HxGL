#ifndef INCLUDED_hxgl_shaders_NormalWriter
#define INCLUDED_hxgl_shaders_NormalWriter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxgl,cross,data,Program)
HX_DECLARE_CLASS3(hxgl,cross,data,VertexBuffer)
HX_DECLARE_CLASS2(hxgl,shaders,NormalWriter)
namespace hxgl{
namespace shaders{


class NormalWriter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NormalWriter_obj OBJ_;
		NormalWriter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< NormalWriter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~NormalWriter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("NormalWriter"); }

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

#endif /* INCLUDED_hxgl_shaders_NormalWriter */ 
