#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_SuperCubeGenerator
#include <SuperCubeGenerator.h>
#endif
#ifndef INCLUDED_Supercube
#include <Supercube.h>
#endif
#ifndef INCLUDED_cpp_Sys
#include <cpp/Sys.h>
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
#ifndef INCLUDED_hxgl_shaders_MVPFun
#include <hxgl/shaders/MVPFun.h>
#endif

Void Supercube_obj::__construct()
{
{
	HX_SOURCE_POS("Source/Supercube.hx",12)
	::hxgl::cross::Context_obj::configureBackBuffer((int)512,(int)512,(int)4);
	HX_SOURCE_POS("Source/Supercube.hx",14)
	this->_shader = ::hxgl::shaders::MVPFun_obj::__new();
	HX_SOURCE_POS("Source/Supercube.hx",16)
	Dynamic sc = ::SuperCubeGenerator_obj::subDivideCube3D((int)0,(int)0,(int)0,(int)1,(int)10);
	HX_SOURCE_POS("Source/Supercube.hx",18)
	int verts = ::Std_obj::_int((double(sc->__Field(HX_CSTRING("v"))->__Field(HX_CSTRING("length"))) / double((int)3)));
	HX_SOURCE_POS("Source/Supercube.hx",20)
	this->vb = ::hxgl::cross::Context_obj::createVertexBuffer(verts,(int)3);
	HX_SOURCE_POS("Source/Supercube.hx",22)
	this->ib = ::hxgl::cross::Context_obj::createIndexBuffer(sc->__Field(HX_CSTRING("i"))->__Field(HX_CSTRING("length")));
	HX_SOURCE_POS("Source/Supercube.hx",24)
	this->ang = (int)0;
	HX_SOURCE_POS("Source/Supercube.hx",26)
	this->vb->upload(sc->__Field(HX_CSTRING("v")),(int)0,(int)3);
	HX_SOURCE_POS("Source/Supercube.hx",30)
	this->ib->upload(sc->__Field(HX_CSTRING("i")),(int)0,(int)3);
	HX_SOURCE_POS("Source/Supercube.hx",33)
	while((true)){
		HX_SOURCE_POS("Source/Supercube.hx",35)
		this->update();
		HX_SOURCE_POS("Source/Supercube.hx",36)
		::cpp::Sys_obj::sleep((double((int)33) / double((int)1000)));
	}
}
;
	return null();
}

Supercube_obj::~Supercube_obj() { }

Dynamic Supercube_obj::__CreateEmpty() { return  new Supercube_obj; }
hx::ObjectPtr< Supercube_obj > Supercube_obj::__new()
{  hx::ObjectPtr< Supercube_obj > result = new Supercube_obj();
	result->__construct();
	return result;}

Dynamic Supercube_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Supercube_obj > result = new Supercube_obj();
	result->__construct();
	return result;}

Void Supercube_obj::update( ){
{
		HX_SOURCE_PUSH("Supercube_obj::update")
		HX_SOURCE_POS("Source/Supercube.hx",43)
		::hxgl::cross::Context_obj::clear((int)0,(int)0,(int)0,(int)1,null(),null());
		HX_SOURCE_POS("Source/Supercube.hx",45)
		hx::AddEq(this->ang,(int)4);
		HX_SOURCE_POS("Source/Supercube.hx",46)
		this->ang = hx::Mod(this->ang,(int)360);
		HX_SOURCE_POS("Source/Supercube.hx",49)
		double fov = (int)90;
		HX_SOURCE_POS("Source/Supercube.hx",50)
		double ratio = (int)1;
		HX_SOURCE_POS("Source/Supercube.hx",51)
		double zFar = (int)1000;
		HX_SOURCE_POS("Source/Supercube.hx",52)
		double zNear = (int)1;
		HX_SOURCE_POS("Source/Supercube.hx",55)
		double scale = ::Math_obj::tan((double((fov * ::Math_obj::PI)) / double((int)360)));
		HX_SOURCE_POS("Source/Supercube.hx",56)
		double m11 = scale;
		HX_SOURCE_POS("Source/Supercube.hx",57)
		double m22 = (-(scale) * ratio);
		HX_SOURCE_POS("Source/Supercube.hx",58)
		double m33 = (double(zFar) / double(((zNear - zFar))));
		HX_SOURCE_POS("Source/Supercube.hx",59)
		int m34 = (int)-1;
		HX_SOURCE_POS("Source/Supercube.hx",60)
		double m43 = (double((zNear * zFar)) / double(((zNear - zFar))));
		HX_SOURCE_POS("Source/Supercube.hx",62)
		double rang = (this->ang * ((double(::Math_obj::PI) / double((int)180))));
		HX_SOURCE_POS("Source/Supercube.hx",64)
		double c = ::Math_obj::cos(rang);
		HX_SOURCE_POS("Source/Supercube.hx",65)
		double s = ::Math_obj::sin(rang);
		struct _Function_1_1{
			inline static Dynamic Block( double &m43,double &s,double &m11,double &c,double &m22,int &m34,double &m33){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("model") , Array_obj< double >::__new().Add(c).Add((int)0).Add(s).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add(-(s)).Add((int)0).Add(c).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(1.0),false);
				__result->Add(HX_CSTRING("view") , Array_obj< double >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add(-.7).Add(1.0),false);
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
		HX_SOURCE_POS("Source/Supercube.hx",68)
		this->_shader->init(_Function_1_1::Block(m43,s,m11,c,m22,m34,m33),_Function_1_2::Block());
		HX_SOURCE_POS("Source/Supercube.hx",89)
		this->_shader->bind(this->vb);
		HX_SOURCE_POS("Source/Supercube.hx",91)
		::hxgl::cross::Context_obj::drawTriangles(this->ib,null(),null());
		HX_SOURCE_POS("Source/Supercube.hx",93)
		::hxgl::cross::Context_obj::present();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Supercube_obj,update,(void))

Void Supercube_obj::main( ){
{
		HX_SOURCE_PUSH("Supercube_obj::main")

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
{
				HX_SOURCE_POS("Source/Supercube.hx",97)
				::Supercube_obj::__new();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_SOURCE_POS("Source/Supercube.hx",96)
		::hxgl::cross::Context_obj::init( Dynamic(new _Function_1_1()));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Supercube_obj,main,(void))


Supercube_obj::Supercube_obj()
{
}

void Supercube_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Supercube);
	HX_MARK_MEMBER_NAME(ang,"ang");
	HX_MARK_MEMBER_NAME(_shader,"_shader");
	HX_MARK_MEMBER_NAME(vb,"vb");
	HX_MARK_MEMBER_NAME(ib,"ib");
	HX_MARK_END_CLASS();
}

Dynamic Supercube_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"vb") ) { return vb; }
		if (HX_FIELD_EQ(inName,"ib") ) { return ib; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ang") ) { return ang; }
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

Dynamic Supercube_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"vb") ) { vb=inValue.Cast< ::hxgl::cross::data::VertexBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ib") ) { ib=inValue.Cast< ::hxgl::cross::data::IndexBuffer >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ang") ) { ang=inValue.Cast< double >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_shader") ) { _shader=inValue.Cast< ::hxgl::shaders::MVPFun >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Supercube_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ang"));
	outFields->push(HX_CSTRING("_shader"));
	outFields->push(HX_CSTRING("vb"));
	outFields->push(HX_CSTRING("ib"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("ang"),
	HX_CSTRING("update"),
	HX_CSTRING("_shader"),
	HX_CSTRING("vb"),
	HX_CSTRING("ib"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Supercube_obj::__mClass;

void Supercube_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Supercube"), hx::TCanCast< Supercube_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Supercube_obj::__boot()
{
}

