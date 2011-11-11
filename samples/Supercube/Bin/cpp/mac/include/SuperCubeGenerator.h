#ifndef INCLUDED_SuperCubeGenerator
#define INCLUDED_SuperCubeGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(SuperCubeGenerator)


class SuperCubeGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SuperCubeGenerator_obj OBJ_;
		SuperCubeGenerator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SuperCubeGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SuperCubeGenerator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SuperCubeGenerator"); }

		static Array< double > v; /* REM */ 
		static Array< int > i; /* REM */ 
		static int i_accum; /* REM */ 
		static Dynamic subDivideCube3D( double x,double y,double z,double size,int ncubes);
		static Dynamic subDivideCube3D_dyn();

		static Dynamic drawICube( double x,double y,double z,double width,Array< double > v,Array< int > i);
		static Dynamic drawICube_dyn();

};


#endif /* INCLUDED_SuperCubeGenerator */ 
