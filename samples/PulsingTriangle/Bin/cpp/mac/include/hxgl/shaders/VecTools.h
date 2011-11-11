#ifndef INCLUDED_hxgl_shaders_VecTools
#define INCLUDED_hxgl_shaders_VecTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxgl,shaders,VecTools)
namespace hxgl{
namespace shaders{


class VecTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VecTools_obj OBJ_;
		VecTools_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< VecTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~VecTools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("VecTools"); }

};

} // end namespace hxgl
} // end namespace shaders

#endif /* INCLUDED_hxgl_shaders_VecTools */ 
