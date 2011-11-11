#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_PulsingTriangle
#include <PulsingTriangle.h>
#endif
#ifndef INCLUDED_cpp_Sys
#include <cpp/Sys.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
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
#ifndef INCLUDED_hxgl_shaders_NormalWriter
#include <hxgl/shaders/NormalWriter.h>
#endif

Void PulsingTriangle_obj::__construct()
{
{
	HX_SOURCE_POS("Source/PulsingTriangle.hx",9)
	::hxgl::cross::Context_obj::configureBackBuffer((int)512,(int)512,(int)4);
	HX_SOURCE_POS("Source/PulsingTriangle.hx",11)
	this->_shader = ::hxgl::shaders::NormalWriter_obj::__new();
	HX_SOURCE_POS("Source/PulsingTriangle.hx",12)
	this->_ct = 0.0;
	HX_SOURCE_POS("Source/PulsingTriangle.hx",16)
	::haxe::Timer t = ::haxe::Timer_obj::__new((int)33);
	HX_SOURCE_POS("Source/PulsingTriangle.hx",17)
	t->run = this->update_dyn();
	HX_SOURCE_POS("Source/PulsingTriangle.hx",21)
	while((true)){
		HX_SOURCE_POS("Source/PulsingTriangle.hx",23)
		this->update();
		HX_SOURCE_POS("Source/PulsingTriangle.hx",24)
		::cpp::Sys_obj::sleep((double((int)33) / double((int)1000)));
	}
}
;
	return null();
}

PulsingTriangle_obj::~PulsingTriangle_obj() { }

Dynamic PulsingTriangle_obj::__CreateEmpty() { return  new PulsingTriangle_obj; }
hx::ObjectPtr< PulsingTriangle_obj > PulsingTriangle_obj::__new()
{  hx::ObjectPtr< PulsingTriangle_obj > result = new PulsingTriangle_obj();
	result->__construct();
	return result;}

Dynamic PulsingTriangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PulsingTriangle_obj > result = new PulsingTriangle_obj();
	result->__construct();
	return result;}

Void PulsingTriangle_obj::update( ){
{
		HX_SOURCE_PUSH("PulsingTriangle_obj::update")
		HX_SOURCE_POS("Source/PulsingTriangle.hx",30)
		hx::AddEq(this->_ct,.05);
		HX_SOURCE_POS("Source/PulsingTriangle.hx",32)
		::hxgl::cross::Context_obj::clear((int)0,(int)0,(int)0,(int)1,null(),null());
		HX_SOURCE_POS("Source/PulsingTriangle.hx",34)
		::hxgl::cross::data::VertexBuffer vb = ::hxgl::cross::Context_obj::createVertexBuffer((int)3,(int)6);
		HX_SOURCE_POS("Source/PulsingTriangle.hx",35)
		::hxgl::cross::data::IndexBuffer ib = ::hxgl::cross::Context_obj::createIndexBuffer((int)3);
		HX_SOURCE_POS("Source/PulsingTriangle.hx",38)
		vb->upload(Array_obj< double >::__new().Add(0.0).Add(0.0).Add(.5).Add(1.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(.5).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(1.0).Add(.5).Add(0.0).Add(0.0).Add(1.0),(int)0,(int)3);
		HX_SOURCE_POS("Source/PulsingTriangle.hx",43)
		ib->upload(Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2),(int)0,(int)3);
		HX_SOURCE_POS("Source/PulsingTriangle.hx",45)
		double dst = ::Math_obj::sin(this->_ct);
		HX_SOURCE_POS("Source/PulsingTriangle.hx",47)
		double fov = (int)90;
		HX_SOURCE_POS("Source/PulsingTriangle.hx",48)
		double ratio = (double((int)4) / double((int)3));
		HX_SOURCE_POS("Source/PulsingTriangle.hx",49)
		double zFar = (int)1000;
		HX_SOURCE_POS("Source/PulsingTriangle.hx",50)
		double zNear = (int)1;
		HX_SOURCE_POS("Source/PulsingTriangle.hx",53)
		double scale = ::Math_obj::tan((double((fov * ::Math_obj::PI)) / double((int)360)));
		HX_SOURCE_POS("Source/PulsingTriangle.hx",54)
		double m11 = scale;
		HX_SOURCE_POS("Source/PulsingTriangle.hx",55)
		double m22 = (-(scale) * ratio);
		HX_SOURCE_POS("Source/PulsingTriangle.hx",56)
		double m33 = (double(zFar) / double(((zNear - zFar))));
		HX_SOURCE_POS("Source/PulsingTriangle.hx",57)
		int m34 = (int)-1;
		HX_SOURCE_POS("Source/PulsingTriangle.hx",58)
		double m43 = (double((zNear * zFar)) / double(((zNear - zFar))));
		struct _Function_1_1{
			inline static Dynamic Block( double &m22,int &m34,double &m43,double &dst,double &m33,double &m11){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("mview") , Array_obj< double >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add(((int)-5 + (dst * (int)3))).Add(1.0),false);
				__result->Add(HX_CSTRING("proj") , Array_obj< double >::__new().Add(m11).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(m22).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(m33).Add(m34).Add((int)0).Add((int)0).Add(m43).Add(1.0),false);
				return __result;
			}
		};
		struct _Function_1_2{
			inline static Dynamic Block( ){
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
		};
		HX_SOURCE_POS("Source/PulsingTriangle.hx",61)
		this->_shader->init(_Function_1_1::Block(m22,m34,m43,dst,m33,m11),_Function_1_2::Block());
		HX_SOURCE_POS("Source/PulsingTriangle.hx",76)
		this->_shader->bind(vb);
		HX_SOURCE_POS("Source/PulsingTriangle.hx",78)
		::hxgl::cross::Context_obj::drawTriangles(ib,null(),null());
		HX_SOURCE_POS("Source/PulsingTriangle.hx",80)
		::hxgl::cross::Context_obj::present();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PulsingTriangle_obj,update,(void))

Void PulsingTriangle_obj::main( ){
{
		HX_SOURCE_PUSH("PulsingTriangle_obj::main")

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
{
				HX_SOURCE_POS("Source/PulsingTriangle.hx",84)
				::PulsingTriangle_obj::__new();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_SOURCE_POS("Source/PulsingTriangle.hx",83)
		::hxgl::cross::Context_obj::init( Dynamic(new _Function_1_1()));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PulsingTriangle_obj,main,(void))


PulsingTriangle_obj::PulsingTriangle_obj()
{
}

void PulsingTriangle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PulsingTriangle);
	HX_MARK_MEMBER_NAME(_shader,"_shader");
	HX_MARK_MEMBER_NAME(_ct,"_ct");
	HX_MARK_END_CLASS();
}

Dynamic PulsingTriangle_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ct") ) { return _ct; }
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

Dynamic PulsingTriangle_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ct") ) { _ct=inValue.Cast< double >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_shader") ) { _shader=inValue.Cast< ::hxgl::shaders::NormalWriter >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void PulsingTriangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_shader"));
	outFields->push(HX_CSTRING("_ct"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("_shader"),
	HX_CSTRING("_ct"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class PulsingTriangle_obj::__mClass;

void PulsingTriangle_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("PulsingTriangle"), hx::TCanCast< PulsingTriangle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void PulsingTriangle_obj::__boot()
{
}

