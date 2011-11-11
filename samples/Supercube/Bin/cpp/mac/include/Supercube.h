#ifndef INCLUDED_Supercube
#define INCLUDED_Supercube

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Supercube)
HX_DECLARE_CLASS3(hxgl,cross,data,IndexBuffer)
HX_DECLARE_CLASS3(hxgl,cross,data,VertexBuffer)
HX_DECLARE_CLASS2(hxgl,shaders,MVPFun)


class Supercube_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Supercube_obj OBJ_;
		Supercube_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Supercube_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Supercube_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Supercube"); }

		double ang; /* REM */ 
		virtual Void update( );
		Dynamic update_dyn();

		::hxgl::shaders::MVPFun _shader; /* REM */ 
		::hxgl::cross::data::VertexBuffer vb; /* REM */ 
		::hxgl::cross::data::IndexBuffer ib; /* REM */ 
		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Supercube */ 
