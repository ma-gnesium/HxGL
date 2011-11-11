#include <hxcpp.h>

#ifndef INCLUDED_hxgl_cross_Context
#include <hxgl/cross/Context.h>
#endif
#ifndef INCLUDED_hxgl_cross_data_Program
#include <hxgl/cross/data/Program.h>
#endif
#ifndef INCLUDED_hxgl_cross_data_VertexBuffer
#include <hxgl/cross/data/VertexBuffer.h>
#endif
#ifndef INCLUDED_hxgl_shaders_White
#include <hxgl/shaders/White.h>
#endif
namespace hxgl{
namespace shaders{

Void White_obj::__construct()
{
{
	HX_SOURCE_POS("../../hxgl/shaders/White.hx",41)
	this->__program = ::hxgl::cross::Context_obj::createProgram();
	HX_SOURCE_POS("../../hxgl/shaders/White.hx",42)
	this->__program->upload(::hxgl::shaders::White_obj::vertex,::hxgl::shaders::White_obj::fragment);
}
;
	return null();
}

White_obj::~White_obj() { }

Dynamic White_obj::__CreateEmpty() { return  new White_obj; }
hx::ObjectPtr< White_obj > White_obj::__new()
{  hx::ObjectPtr< White_obj > result = new White_obj();
	result->__construct();
	return result;}

Dynamic White_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< White_obj > result = new White_obj();
	result->__construct();
	return result;}

Void White_obj::init( Dynamic vertex,Dynamic fragment){
{
		HX_SOURCE_PUSH("White_obj::init")
		HX_SOURCE_POS("../../hxgl/shaders/White.hx",45)
		::hxgl::cross::Context_obj::setProgram(this->__program);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(White_obj,init,(void))

Void White_obj::bind( ::hxgl::cross::data::VertexBuffer vbuffer){
{
		HX_SOURCE_PUSH("White_obj::bind")
		HX_SOURCE_POS("../../hxgl/shaders/White.hx",49)
		::hxgl::cross::Context_obj::setVertexBufferAt(HX_CSTRING("pos"),vbuffer,(int)0,HX_CSTRING("float3"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(White_obj,bind,(void))

::String White_obj::vertex;

::String White_obj::fragment;


White_obj::White_obj()
{
}

void White_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(White);
	HX_MARK_MEMBER_NAME(__program,"__program");
	HX_MARK_END_CLASS();
}

Dynamic White_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { return vertex; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fragment") ) { return fragment; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__program") ) { return __program; }
	}
	return super::__Field(inName);
}

Dynamic White_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { vertex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fragment") ) { fragment=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__program") ) { __program=inValue.Cast< ::hxgl::cross::data::Program >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void White_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__program"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("vertex"),
	HX_CSTRING("fragment"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("bind"),
	HX_CSTRING("__program"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(White_obj::vertex,"vertex");
	HX_MARK_MEMBER_NAME(White_obj::fragment,"fragment");
};

Class White_obj::__mClass;

void White_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxgl.shaders.White"), hx::TCanCast< White_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void White_obj::__boot()
{
	hx::Static(vertex) = (((HX_CSTRING("attribute vec3 pos;") + HX_CSTRING("void main() {")) + HX_CSTRING("\tgl_Position = vec4(pos, 1.0);")) + HX_CSTRING("}"));
	hx::Static(fragment) = (((((HX_CSTRING("#ifdef GL_ES\n") + HX_CSTRING("precision highp float;\n")) + HX_CSTRING("#endif\n")) + HX_CSTRING("void main() {")) + HX_CSTRING("\tgl_FragColor = vec4(1,1,1,1);")) + HX_CSTRING("}"));
}

} // end namespace hxgl
} // end namespace shaders
