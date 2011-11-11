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
#ifndef INCLUDED_hxgl_shaders_NormalWriter
#include <hxgl/shaders/NormalWriter.h>
#endif
namespace hxgl{
namespace shaders{

Void NormalWriter_obj::__construct()
{
{
	HX_SOURCE_POS("../../hxgl/shaders/NormalWriter.hx",50)
	this->__program = ::hxgl::cross::Context_obj::createProgram();
	HX_SOURCE_POS("../../hxgl/shaders/NormalWriter.hx",51)
	this->__program->upload(::hxgl::shaders::NormalWriter_obj::vertex,::hxgl::shaders::NormalWriter_obj::fragment);
}
;
	return null();
}

NormalWriter_obj::~NormalWriter_obj() { }

Dynamic NormalWriter_obj::__CreateEmpty() { return  new NormalWriter_obj; }
hx::ObjectPtr< NormalWriter_obj > NormalWriter_obj::__new()
{  hx::ObjectPtr< NormalWriter_obj > result = new NormalWriter_obj();
	result->__construct();
	return result;}

Dynamic NormalWriter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NormalWriter_obj > result = new NormalWriter_obj();
	result->__construct();
	return result;}

Void NormalWriter_obj::init( Dynamic vertex,Dynamic fragment){
{
		HX_SOURCE_PUSH("NormalWriter_obj::init")
		HX_SOURCE_POS("../../hxgl/shaders/NormalWriter.hx",55)
		::hxgl::cross::Context_obj::setProgram(this->__program);
		HX_SOURCE_POS("../../hxgl/shaders/NormalWriter.hx",56)
		::hxgl::cross::Context_obj::__GL__setMatrix(HX_CSTRING("mview"),false,vertex->__Field(HX_CSTRING("mview")));
		HX_SOURCE_POS("../../hxgl/shaders/NormalWriter.hx",57)
		::hxgl::cross::Context_obj::__GL__setMatrix(HX_CSTRING("proj"),false,vertex->__Field(HX_CSTRING("proj")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NormalWriter_obj,init,(void))

Void NormalWriter_obj::bind( ::hxgl::cross::data::VertexBuffer vbuffer){
{
		HX_SOURCE_PUSH("NormalWriter_obj::bind")
		HX_SOURCE_POS("../../hxgl/shaders/NormalWriter.hx",62)
		::hxgl::cross::Context_obj::setVertexBufferAt(HX_CSTRING("pos"),vbuffer,(int)0,HX_CSTRING("float3"));
		HX_SOURCE_POS("../../hxgl/shaders/NormalWriter.hx",63)
		::hxgl::cross::Context_obj::setVertexBufferAt(HX_CSTRING("norm"),vbuffer,(int)3,HX_CSTRING("float3"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NormalWriter_obj,bind,(void))

::String NormalWriter_obj::vertex;

::String NormalWriter_obj::fragment;


NormalWriter_obj::NormalWriter_obj()
{
}

void NormalWriter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NormalWriter);
	HX_MARK_MEMBER_NAME(__program,"__program");
	HX_MARK_END_CLASS();
}

Dynamic NormalWriter_obj::__Field(const ::String &inName)
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

Dynamic NormalWriter_obj::__SetField(const ::String &inName,const Dynamic &inValue)
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

void NormalWriter_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(NormalWriter_obj::vertex,"vertex");
	HX_MARK_MEMBER_NAME(NormalWriter_obj::fragment,"fragment");
};

Class NormalWriter_obj::__mClass;

void NormalWriter_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxgl.shaders.NormalWriter"), hx::TCanCast< NormalWriter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void NormalWriter_obj::__boot()
{
	hx::Static(vertex) = HX_CSTRING("\n\t\tattribute vec3 pos;\n\t\tattribute vec3 norm;\n\t\tvarying vec3 normal;\n\t\tuniform mat4 mview;\n\t\tuniform mat4 proj;\n\t\tvoid main() {\n\t\t\tgl_Position = proj * mview * vec4(pos, 1.0);\n\t\t\tnormal = norm;\n\t\t}\n\t\t");
	hx::Static(fragment) = ((((((HX_CSTRING("#ifdef GL_ES\n") + HX_CSTRING("precision highp float;\n")) + HX_CSTRING("#endif\n")) + HX_CSTRING("varying vec3 normal;")) + HX_CSTRING("void main() {")) + HX_CSTRING("\tgl_FragColor = vec4 (normal.xyz, 1);")) + HX_CSTRING("}"));
}

} // end namespace hxgl
} // end namespace shaders
