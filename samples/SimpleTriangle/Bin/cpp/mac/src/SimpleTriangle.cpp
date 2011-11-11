#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_SimpleTriangle
#include <SimpleTriangle.h>
#endif
#ifndef INCLUDED_cpp_Sys
#include <cpp/Sys.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxgl_cross_Context
#include <hxgl/cross/Context.h>
#endif
#ifndef INCLUDED_hxgl_cross_data_IndexBuffer
#include <hxgl/cross/data/IndexBuffer.h>
#endif
#ifndef INCLUDED_hxgl_cross_data_VertexBuffer
#include <hxgl/cross/data/VertexBuffer.h>
#endif
#ifndef INCLUDED_hxgl_shaders_White
#include <hxgl/shaders/White.h>
#endif

Void SimpleTriangle_obj::__construct()
{
{
	HX_SOURCE_POS("Source/SimpleTriangle.hx",12)
	::hxgl::cross::Context_obj::configureBackBuffer((int)512,(int)512,(int)4);
	HX_SOURCE_POS("Source/SimpleTriangle.hx",15)
	this->_shader = ::hxgl::shaders::White_obj::__new();
	HX_SOURCE_POS("Source/SimpleTriangle.hx",17)
	this->vb = ::hxgl::cross::Context_obj::createVertexBuffer((int)3,(int)3);
	HX_SOURCE_POS("Source/SimpleTriangle.hx",19)
	::haxe::Log_obj::trace(HX_CSTRING("VB done"),hx::SourceInfo(HX_CSTRING("SimpleTriangle.hx"),19,HX_CSTRING("SimpleTriangle"),HX_CSTRING("new")));
	HX_SOURCE_POS("Source/SimpleTriangle.hx",21)
	this->ib = ::hxgl::cross::Context_obj::createIndexBuffer((int)3);
	HX_SOURCE_POS("Source/SimpleTriangle.hx",23)
	::haxe::Log_obj::trace(HX_CSTRING("IB done"),hx::SourceInfo(HX_CSTRING("SimpleTriangle.hx"),23,HX_CSTRING("SimpleTriangle"),HX_CSTRING("new")));
	HX_SOURCE_POS("Source/SimpleTriangle.hx",26)
	this->vb->upload(Array_obj< double >::__new().Add(0.0).Add(0.0).Add(.5).Add(1.0).Add(0.0).Add(.5).Add(0.0).Add(1.0).Add(.5),(int)0,(int)3);
	HX_SOURCE_POS("Source/SimpleTriangle.hx",32)
	this->ib->upload(Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2),(int)0,(int)3);
	HX_SOURCE_POS("Source/SimpleTriangle.hx",35)
	while((true)){
		HX_SOURCE_POS("Source/SimpleTriangle.hx",37)
		this->update();
		HX_SOURCE_POS("Source/SimpleTriangle.hx",38)
		::cpp::Sys_obj::sleep((double((int)33) / double((int)1000)));
	}
}
;
	return null();
}

SimpleTriangle_obj::~SimpleTriangle_obj() { }

Dynamic SimpleTriangle_obj::__CreateEmpty() { return  new SimpleTriangle_obj; }
hx::ObjectPtr< SimpleTriangle_obj > SimpleTriangle_obj::__new()
{  hx::ObjectPtr< SimpleTriangle_obj > result = new SimpleTriangle_obj();
	result->__construct();
	return result;}

Dynamic SimpleTriangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleTriangle_obj > result = new SimpleTriangle_obj();
	result->__construct();
	return result;}

Void SimpleTriangle_obj::update( ){
{
		HX_SOURCE_PUSH("SimpleTriangle_obj::update")
		HX_SOURCE_POS("Source/SimpleTriangle.hx",44)
		::hxgl::cross::Context_obj::clear(::Math_obj::random(),(int)0,(int)0,(int)1,null(),null());
		struct _Function_1_1{
			inline static Dynamic Block( ){
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
		};
		struct _Function_1_2{
			inline static Dynamic Block( ){
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
		};
		HX_SOURCE_POS("Source/SimpleTriangle.hx",47)
		this->_shader->init(_Function_1_1::Block(),_Function_1_2::Block());
		HX_SOURCE_POS("Source/SimpleTriangle.hx",49)
		this->_shader->bind(this->vb);
		HX_SOURCE_POS("Source/SimpleTriangle.hx",51)
		::hxgl::cross::Context_obj::drawTriangles(this->ib,null(),null());
		HX_SOURCE_POS("Source/SimpleTriangle.hx",53)
		::hxgl::cross::Context_obj::present();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleTriangle_obj,update,(void))

Void SimpleTriangle_obj::main( ){
{
		HX_SOURCE_PUSH("SimpleTriangle_obj::main")

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
{
				HX_SOURCE_POS("Source/SimpleTriangle.hx",57)
				::SimpleTriangle_obj::__new();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_SOURCE_POS("Source/SimpleTriangle.hx",56)
		::hxgl::cross::Context_obj::init( Dynamic(new _Function_1_1()));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SimpleTriangle_obj,main,(void))


SimpleTriangle_obj::SimpleTriangle_obj()
{
}

void SimpleTriangle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleTriangle);
	HX_MARK_MEMBER_NAME(_shader,"_shader");
	HX_MARK_MEMBER_NAME(vb,"vb");
	HX_MARK_MEMBER_NAME(ib,"ib");
	HX_MARK_END_CLASS();
}

Dynamic SimpleTriangle_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"vb") ) { return vb; }
		if (HX_FIELD_EQ(inName,"ib") ) { return ib; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_shader") ) { return _shader; }
	}
	return super::__Field(inName);
}

Dynamic SimpleTriangle_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"vb") ) { vb=inValue.Cast< ::hxgl::cross::data::VertexBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ib") ) { ib=inValue.Cast< ::hxgl::cross::data::IndexBuffer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_shader") ) { _shader=inValue.Cast< ::hxgl::shaders::White >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void SimpleTriangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_shader"));
	outFields->push(HX_CSTRING("vb"));
	outFields->push(HX_CSTRING("ib"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("_shader"),
	HX_CSTRING("vb"),
	HX_CSTRING("ib"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class SimpleTriangle_obj::__mClass;

void SimpleTriangle_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("SimpleTriangle"), hx::TCanCast< SimpleTriangle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void SimpleTriangle_obj::__boot()
{
}

