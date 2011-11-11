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
#ifndef INCLUDED_hxgl_shaders_MVPFun
#include <hxgl/shaders/MVPFun.h>
#endif
namespace hxgl{
namespace shaders{

Void MVPFun_obj::__construct()
{
{
	HX_SOURCE_POS("../../hxgl/shaders/MVPFun.hx",49)
	this->__program = ::hxgl::cross::Context_obj::createProgram();
	HX_SOURCE_POS("../../hxgl/shaders/MVPFun.hx",50)
	this->__program->upload(::hxgl::shaders::MVPFun_obj::vertex,::hxgl::shaders::MVPFun_obj::fragment);
}
;
	return null();
}

MVPFun_obj::~MVPFun_obj() { }

Dynamic MVPFun_obj::__CreateEmpty() { return  new MVPFun_obj; }
hx::ObjectPtr< MVPFun_obj > MVPFun_obj::__new()
{  hx::ObjectPtr< MVPFun_obj > result = new MVPFun_obj();
	result->__construct();
	return result;}

Dynamic MVPFun_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MVPFun_obj > result = new MVPFun_obj();
	result->__construct();
	return result;}

Void MVPFun_obj::init( Dynamic vertex,Dynamic fragment){
{
		HX_SOURCE_PUSH("MVPFun_obj::init")
		HX_SOURCE_POS("../../hxgl/shaders/MVPFun.hx",54)
		::hxgl::cross::Context_obj::setProgram(this->__program);
		HX_SOURCE_POS("../../hxgl/shaders/MVPFun.hx",55)
		::hxgl::cross::Context_obj::__GL__setMatrix(HX_CSTRING("model"),false,vertex->__Field(HX_CSTRING("model")));
		HX_SOURCE_POS("../../hxgl/shaders/MVPFun.hx",56)
		::hxgl::cross::Context_obj::__GL__setMatrix(HX_CSTRING("view"),false,vertex->__Field(HX_CSTRING("view")));
		HX_SOURCE_POS("../../hxgl/shaders/MVPFun.hx",57)
		::hxgl::cross::Context_obj::__GL__setMatrix(HX_CSTRING("proj"),false,vertex->__Field(HX_CSTRING("proj")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MVPFun_obj,init,(void))

Void MVPFun_obj::bind( ::hxgl::cross::data::VertexBuffer vbuffer){
{
		HX_SOURCE_PUSH("MVPFun_obj::bind")
		HX_SOURCE_POS("../../hxgl/shaders/MVPFun.hx",60)
		::hxgl::cross::Context_obj::setVertexBufferAt(HX_CSTRING("pos"),vbuffer,(int)0,HX_CSTRING("float3"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MVPFun_obj,bind,(void))

::String MVPFun_obj::vertex;

::String MVPFun_obj::fragment;


MVPFun_obj::MVPFun_obj()
{
}

void MVPFun_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MVPFun);
	HX_MARK_MEMBER_NAME(__program,"__program");
	HX_MARK_END_CLASS();
}

Dynamic MVPFun_obj::__Field(const ::String &inName)
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

Dynamic MVPFun_obj::__SetField(const ::String &inName,const Dynamic &inValue)
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

void MVPFun_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(MVPFun_obj::vertex,"vertex");
	HX_MARK_MEMBER_NAME(MVPFun_obj::fragment,"fragment");
};

Class MVPFun_obj::__mClass;

void MVPFun_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxgl.shaders.MVPFun"), hx::TCanCast< MVPFun_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void MVPFun_obj::__boot()
{
	hx::Static(vertex) = HX_CSTRING("\n\t\tattribute vec3 pos;\n\t\tuniform mat4 model;\n\t\tuniform mat4 view;\n\t\tuniform mat4 proj;\n\t\tvarying vec4 color;\n\t\tvoid main() {\n\t\t\tcolor = vec4(pos, 1.0);\n\t\t\tgl_Position = proj * view * model * color;\n\t\t}\n\t\t");
	hx::Static(fragment) = ((((((HX_CSTRING("#ifdef GL_ES\n") + HX_CSTRING("precision highp float;\n")) + HX_CSTRING("#endif\n")) + HX_CSTRING("varying vec4 color;")) + HX_CSTRING("void main() {")) + HX_CSTRING("\tgl_FragColor = color;")) + HX_CSTRING("}"));
}

} // end namespace hxgl
} // end namespace shaders
