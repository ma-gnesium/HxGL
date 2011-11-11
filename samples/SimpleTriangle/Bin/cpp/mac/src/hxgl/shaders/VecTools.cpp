#include <hxcpp.h>

#ifndef INCLUDED_hxgl_shaders_VecTools
#include <hxgl/shaders/VecTools.h>
#endif
namespace hxgl{
namespace shaders{

Void VecTools_obj::__construct()
{
	return null();
}

VecTools_obj::~VecTools_obj() { }

Dynamic VecTools_obj::__CreateEmpty() { return  new VecTools_obj; }
hx::ObjectPtr< VecTools_obj > VecTools_obj::__new()
{  hx::ObjectPtr< VecTools_obj > result = new VecTools_obj();
	result->__construct();
	return result;}

Dynamic VecTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VecTools_obj > result = new VecTools_obj();
	result->__construct();
	return result;}


VecTools_obj::VecTools_obj()
{
}

void VecTools_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VecTools);
	HX_MARK_END_CLASS();
}

Dynamic VecTools_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic VecTools_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void VecTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class VecTools_obj::__mClass;

void VecTools_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxgl.shaders.VecTools"), hx::TCanCast< VecTools_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void VecTools_obj::__boot()
{
}

} // end namespace hxgl
} // end namespace shaders
