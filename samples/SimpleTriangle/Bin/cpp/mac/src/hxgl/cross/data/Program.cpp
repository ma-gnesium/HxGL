#include <hxcpp.h>

#ifndef INCLUDED_hxgl_core_GL
#include <hxgl/core/GL.h>
#endif
#ifndef INCLUDED_hxgl_cross_Context
#include <hxgl/cross/Context.h>
#endif
#ifndef INCLUDED_hxgl_cross_data_Program
#include <hxgl/cross/data/Program.h>
#endif
namespace hxgl{
namespace cross{
namespace data{

Void Program_obj::__construct(int prog)
{
{
	HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",18)
	this->__prog = prog;
}
;
	return null();
}

Program_obj::~Program_obj() { }

Dynamic Program_obj::__CreateEmpty() { return  new Program_obj; }
hx::ObjectPtr< Program_obj > Program_obj::__new(int prog)
{  hx::ObjectPtr< Program_obj > result = new Program_obj();
	result->__construct(prog);
	return result;}

Dynamic Program_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Program_obj > result = new Program_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Program_obj::upload( ::String vertexProgram,::String fragmentProgram){
{
		HX_SOURCE_PUSH("Program_obj::upload")
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",23)
		::hxgl::core::GL gl = ::hxgl::cross::Context_obj::gl;
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",25)
		Dynamic __vertex = gl->createShader(gl->VERTEX_SHADER);
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",26)
		gl->shaderSource(__vertex,vertexProgram);
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",27)
		gl->compileShader(__vertex);
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",28)
		if ((!(gl->getShaderParameter(__vertex,gl->COMPILE_STATUS)))){
			HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",28)
			hx::Throw ((HX_CSTRING("Could not compile vertex shader:\n\n") + gl->__Field(HX_CSTRING("getShaderInfoLog"))(__vertex)));
		}
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",31)
		gl->attachShader(this->__prog,__vertex);
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",33)
		Dynamic __fragment = gl->createShader(gl->FRAGMENT_SHADER);
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",34)
		gl->shaderSource(__fragment,fragmentProgram);
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",35)
		gl->compileShader(__fragment);
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",36)
		if ((!(gl->getShaderParameter(__fragment,gl->COMPILE_STATUS)))){
			HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",36)
			hx::Throw ((HX_CSTRING("Could not compile fragment shader:\n\n") + gl->__Field(HX_CSTRING("getShaderInfoLog"))(__fragment)));
		}
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",39)
		gl->attachShader(this->__prog,__fragment);
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",41)
		gl->linkProgram(this->__prog);
		HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",42)
		if ((!(gl->getProgramParameter(this->__prog,gl->LINK_STATUS)))){
			HX_SOURCE_POS("../../hxgl/cross/data/Program.hx",42)
			hx::Throw ((HX_CSTRING("Could not link the program!\n\n") + gl->__Field(HX_CSTRING("getProgramInfoLog"))(this->__prog)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Program_obj,upload,(void))


Program_obj::Program_obj()
{
}

void Program_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Program);
	HX_MARK_MEMBER_NAME(__prog,"__prog");
	HX_MARK_MEMBER_NAME(__vertex,"__vertex");
	HX_MARK_MEMBER_NAME(__fragment,"__fragment");
	HX_MARK_END_CLASS();
}

Dynamic Program_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		if (HX_FIELD_EQ(inName,"__prog") ) { return __prog; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__vertex") ) { return __vertex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__fragment") ) { return __fragment; }
	}
	return super::__Field(inName);
}

Dynamic Program_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__prog") ) { __prog=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__vertex") ) { __vertex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__fragment") ) { __fragment=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Program_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__prog"));
	outFields->push(HX_CSTRING("__vertex"));
	outFields->push(HX_CSTRING("__fragment"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("upload"),
	HX_CSTRING("__prog"),
	HX_CSTRING("__vertex"),
	HX_CSTRING("__fragment"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Program_obj::__mClass;

void Program_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxgl.cross.data.Program"), hx::TCanCast< Program_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Program_obj::__boot()
{
}

} // end namespace hxgl
} // end namespace cross
} // end namespace data
