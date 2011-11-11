#ifndef INCLUDED_PulsingTriangle
#define INCLUDED_PulsingTriangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(PulsingTriangle)
HX_DECLARE_CLASS2(hxgl,shaders,NormalWriter)


class PulsingTriangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PulsingTriangle_obj OBJ_;
		PulsingTriangle_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PulsingTriangle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PulsingTriangle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("PulsingTriangle"); }

		virtual Void update( );
		Dynamic update_dyn();

		::hxgl::shaders::NormalWriter _shader; /* REM */ 
		double _ct; /* REM */ 
		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_PulsingTriangle */ 
