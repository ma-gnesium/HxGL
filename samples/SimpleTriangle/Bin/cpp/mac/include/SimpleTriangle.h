#ifndef INCLUDED_SimpleTriangle
#define INCLUDED_SimpleTriangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(SimpleTriangle)
HX_DECLARE_CLASS3(hxgl,cross,data,IndexBuffer)
HX_DECLARE_CLASS3(hxgl,cross,data,VertexBuffer)
HX_DECLARE_CLASS2(hxgl,shaders,White)


class SimpleTriangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SimpleTriangle_obj OBJ_;
		SimpleTriangle_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SimpleTriangle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SimpleTriangle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SimpleTriangle"); }

		virtual Void update( );
		Dynamic update_dyn();

		::hxgl::shaders::White _shader; /* REM */ 
		::hxgl::cross::data::VertexBuffer vb; /* REM */ 
		::hxgl::cross::data::IndexBuffer ib; /* REM */ 
		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_SimpleTriangle */ 
