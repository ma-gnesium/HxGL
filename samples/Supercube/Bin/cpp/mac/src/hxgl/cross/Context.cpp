#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_hxgl_core_GL
#include <hxgl/core/GL.h>
#endif
#ifndef INCLUDED_hxgl_cross_Context
#include <hxgl/cross/Context.h>
#endif
#ifndef INCLUDED_hxgl_cross_data_IndexBuffer
#include <hxgl/cross/data/IndexBuffer.h>
#endif
#ifndef INCLUDED_hxgl_cross_data_Program
#include <hxgl/cross/data/Program.h>
#endif
#ifndef INCLUDED_hxgl_cross_data_VertexBuffer
#include <hxgl/cross/data/VertexBuffer.h>
#endif
namespace hxgl{
namespace cross{

Void Context_obj::__construct()
{
	return null();
}

Context_obj::~Context_obj() { }

Dynamic Context_obj::__CreateEmpty() { return  new Context_obj; }
hx::ObjectPtr< Context_obj > Context_obj::__new()
{  hx::ObjectPtr< Context_obj > result = new Context_obj();
	result->__construct();
	return result;}

Dynamic Context_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context_obj > result = new Context_obj();
	result->__construct();
	return result;}

Void Context_obj::init( Dynamic cb){
{
		HX_SOURCE_PUSH("Context_obj::init")
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",46)
		::hxgl::cross::Context_obj::_init();
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",47)
		::hxgl::cross::Context_obj::_init_window();
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",48)
		::hxgl::cross::Context_obj::gl = ::hxgl::core::GL_obj::__new();
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",49)
		::hxgl::cross::Context_obj::_create_window(HX_CSTRING("[CPP-HxGL]"),(int)512,(int)512,true);
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",50)
		cb().Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context_obj,init,(void))

Void Context_obj::move( double x,double y){
{
		HX_SOURCE_PUSH("Context_obj::move")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context_obj,move,(void))

Void Context_obj::clear( Dynamic __o_r,Dynamic __o_g,Dynamic __o_b,Dynamic __o_a,Dynamic __o_d,Dynamic __o_m){
double r = __o_r.Default(0.0);
double g = __o_g.Default(0.0);
double b = __o_b.Default(0.0);
double a = __o_a.Default(1.0);
int d = __o_d.Default(-1);
int m = __o_m.Default(0);
	HX_SOURCE_PUSH("Context_obj::clear");
{
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",70)
		::hxgl::cross::Context_obj::gl->clearColor(r,g,b,a);
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",71)
		::hxgl::cross::Context_obj::gl->clear(::hxgl::cross::Context_obj::gl->COLOR_BUFFER_BIT);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Context_obj,clear,(void))

Void Context_obj::setCulling( ::String triangleFaceToCull){
{
		HX_SOURCE_PUSH("Context_obj::setCulling")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context_obj,setCulling,(void))

Void Context_obj::setDepthTest( bool depthMask,::String passCompareMode){
{
		HX_SOURCE_PUSH("Context_obj::setDepthTest")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context_obj,setDepthTest,(void))

Void Context_obj::configureBackBuffer( int width,int height,int aa){
{
		HX_SOURCE_PUSH("Context_obj::configureBackBuffer")
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",116)
		::hxgl::cross::Context_obj::gl->viewport((int)0,(int)0,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Context_obj,configureBackBuffer,(void))

::hxgl::cross::data::VertexBuffer Context_obj::createVertexBuffer( int numVertices,int data32PerVertex){
	HX_SOURCE_PUSH("Context_obj::createVertexBuffer")
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",133)
	Dynamic id = ::hxgl::cross::Context_obj::gl->createBuffer();
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",134)
	::hxgl::cross::Context_obj::gl->bindBuffer(::hxgl::cross::Context_obj::gl->ARRAY_BUFFER,id);
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",135)
	::hxgl::cross::Context_obj::gl->bufferData(::hxgl::cross::Context_obj::gl->ARRAY_BUFFER,((numVertices * data32PerVertex) * (int)4),::hxgl::cross::Context_obj::gl->STATIC_DRAW);
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",136)
	::hxgl::cross::Context_obj::gl->bindBuffer(::hxgl::cross::Context_obj::gl->ARRAY_BUFFER,null());
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",137)
	::hxgl::cross::data::VertexBuffer vb = ::hxgl::cross::data::VertexBuffer_obj::__new(id,(data32PerVertex * (int)4));
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",140)
	return vb;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context_obj,createVertexBuffer,return )

::hxgl::cross::data::IndexBuffer Context_obj::createIndexBuffer( int numIndices){
	HX_SOURCE_PUSH("Context_obj::createIndexBuffer")
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",149)
	Dynamic id = ::hxgl::cross::Context_obj::gl->createBuffer();
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",150)
	::hxgl::cross::Context_obj::gl->bindBuffer(::hxgl::cross::Context_obj::gl->ELEMENT_ARRAY_BUFFER,id);
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",151)
	::hxgl::cross::Context_obj::gl->bufferData(::hxgl::cross::Context_obj::gl->ELEMENT_ARRAY_BUFFER,(numIndices * (int)2),::hxgl::cross::Context_obj::gl->STATIC_DRAW);
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",152)
	::hxgl::cross::Context_obj::gl->bindBuffer(::hxgl::cross::Context_obj::gl->ELEMENT_ARRAY_BUFFER,null());
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",153)
	::hxgl::cross::data::IndexBuffer ib = ::hxgl::cross::data::IndexBuffer_obj::__new(id,numIndices);
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",156)
	return ib;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context_obj,createIndexBuffer,return )

Void Context_obj::drawTriangles( ::hxgl::cross::data::IndexBuffer indexBuffer,Dynamic __o_firstIndex,Dynamic __o_numTriangles){
int firstIndex = __o_firstIndex.Default(0);
int numTriangles = __o_numTriangles.Default(-1);
	HX_SOURCE_PUSH("Context_obj::drawTriangles");
{
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",164)
		::hxgl::cross::Context_obj::gl->bindBuffer(::hxgl::cross::Context_obj::gl->ELEMENT_ARRAY_BUFFER,indexBuffer->id);
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",166)
		if (((numTriangles == (int)-1))){
			HX_SOURCE_POS("../../hxgl/cross/Context.hx",166)
			numTriangles = indexBuffer->numIndices;
		}
		else{
			HX_SOURCE_POS("../../hxgl/cross/Context.hx",168)
			hx::MultEq(numTriangles,(int)3);
		}
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",171)
		::hxgl::cross::Context_obj::gl->drawElements(::hxgl::cross::Context_obj::gl->TRIANGLES,numTriangles,::hxgl::cross::Context_obj::gl->UNSIGNED_SHORT,firstIndex);
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",172)
		::hxgl::cross::Context_obj::gl->bindBuffer(::hxgl::cross::Context_obj::gl->ELEMENT_ARRAY_BUFFER,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Context_obj,drawTriangles,(void))

Void Context_obj::setVertexBufferAt( ::String index,::hxgl::cross::data::VertexBuffer buffer,int bufferOffset,::String format){
{
		HX_SOURCE_PUSH("Context_obj::setVertexBufferAt")
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",180)
		::hxgl::cross::Context_obj::gl->bindBuffer(::hxgl::cross::Context_obj::gl->ARRAY_BUFFER,buffer->id);
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",181)
		Dynamic loc = ::hxgl::cross::Context_obj::gl->getAttribLocation(::hxgl::cross::Context_obj::__program,index);
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",183)
		int type = (int)0;
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",184)
		int size = (int)0;
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",186)
		::String _switch_1 = (format);
		if (  ( _switch_1==HX_CSTRING("float3"))){
			HX_SOURCE_POS("../../hxgl/cross/Context.hx",188)
			type = ::hxgl::cross::Context_obj::gl->FLOAT;
			HX_SOURCE_POS("../../hxgl/cross/Context.hx",189)
			size = (int)3;
		}
		else  {
			HX_SOURCE_POS("../../hxgl/cross/Context.hx",190)
			hx::Throw (HX_CSTRING("Invalid format"));
		}
;
;
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",192)
		::hxgl::cross::Context_obj::gl->vertexAttribPointer(loc,size,type,false,buffer->__bsize,(bufferOffset * (int)4));
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",193)
		::hxgl::cross::Context_obj::gl->enableVertexAttribArray(loc);
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",194)
		::hxgl::cross::Context_obj::gl->bindBuffer(::hxgl::cross::Context_obj::gl->ARRAY_BUFFER,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Context_obj,setVertexBufferAt,(void))

Void Context_obj::__GL__setMatrix( ::String loc,bool transpose,Array< double > mat){
{
		HX_SOURCE_PUSH("Context_obj::__GL__setMatrix")
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",200)
		Dynamic loc1 = ::hxgl::cross::Context_obj::gl->getUniformLocation(::hxgl::cross::Context_obj::__program,loc);
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",201)
		::hxgl::cross::Context_obj::gl->uniformMatrix4fv(loc1,transpose,mat);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Context_obj,__GL__setMatrix,(void))

::hxgl::cross::data::Program Context_obj::createProgram( ){
	HX_SOURCE_PUSH("Context_obj::createProgram")
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",205)
	return ::hxgl::cross::data::Program_obj::__new(::hxgl::cross::Context_obj::gl->createProgram());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Context_obj,createProgram,return )

Void Context_obj::setProgram( ::hxgl::cross::data::Program program){
{
		HX_SOURCE_PUSH("Context_obj::setProgram")
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",217)
		::hxgl::cross::Context_obj::__program = program->__prog;
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",218)
		::hxgl::cross::Context_obj::gl->useProgram(::hxgl::cross::Context_obj::__program);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context_obj,setProgram,(void))

Void Context_obj::present( ){
{
		HX_SOURCE_PUSH("Context_obj::present")
		HX_SOURCE_POS("../../hxgl/cross/Context.hx",222)
		::hxgl::cross::Context_obj::_handle_frame();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Context_obj,present,(void))

Dynamic Context_obj::_init;

Dynamic Context_obj::_init_window;

Dynamic Context_obj::_create_window;

Dynamic Context_obj::_handle_frame;

Dynamic Context_obj::l( ::String id,int p){
	HX_SOURCE_PUSH("Context_obj::l")
	HX_SOURCE_POS("../../hxgl/cross/Context.hx",242)
	return ::cpp::Lib_obj::load(HX_CSTRING("gl"),id,p);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context_obj,l,return )

::hxgl::core::GL Context_obj::gl;

int Context_obj::__program;


Context_obj::Context_obj()
{
}

void Context_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context);
	HX_MARK_END_CLASS();
}

Dynamic Context_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { return l_dyn(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"_init") ) { return _init; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"present") ) { return present_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__program") ) { return __program; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setCulling") ) { return setCulling_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgram") ) { return setProgram_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setDepthTest") ) { return setDepthTest_dyn(); }
		if (HX_FIELD_EQ(inName,"_init_window") ) { return _init_window; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"_handle_frame") ) { return _handle_frame; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_create_window") ) { return _create_window; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__GL__setMatrix") ) { return __GL__setMatrix_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createIndexBuffer") ) { return createIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexBufferAt") ) { return setVertexBufferAt_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createVertexBuffer") ) { return createVertexBuffer_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"configureBackBuffer") ) { return configureBackBuffer_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Context_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::hxgl::core::GL >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_init") ) { _init=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__program") ) { __program=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_init_window") ) { _init_window=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_handle_frame") ) { _handle_frame=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_create_window") ) { _create_window=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Context_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("move"),
	HX_CSTRING("clear"),
	HX_CSTRING("setCulling"),
	HX_CSTRING("setDepthTest"),
	HX_CSTRING("configureBackBuffer"),
	HX_CSTRING("createVertexBuffer"),
	HX_CSTRING("createIndexBuffer"),
	HX_CSTRING("drawTriangles"),
	HX_CSTRING("setVertexBufferAt"),
	HX_CSTRING("__GL__setMatrix"),
	HX_CSTRING("createProgram"),
	HX_CSTRING("setProgram"),
	HX_CSTRING("present"),
	HX_CSTRING("_init"),
	HX_CSTRING("_init_window"),
	HX_CSTRING("_create_window"),
	HX_CSTRING("_handle_frame"),
	HX_CSTRING("l"),
	HX_CSTRING("gl"),
	HX_CSTRING("__program"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context_obj::_init,"_init");
	HX_MARK_MEMBER_NAME(Context_obj::_init_window,"_init_window");
	HX_MARK_MEMBER_NAME(Context_obj::_create_window,"_create_window");
	HX_MARK_MEMBER_NAME(Context_obj::_handle_frame,"_handle_frame");
	HX_MARK_MEMBER_NAME(Context_obj::gl,"gl");
	HX_MARK_MEMBER_NAME(Context_obj::__program,"__program");
};

Class Context_obj::__mClass;

void Context_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxgl.cross.Context"), hx::TCanCast< Context_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Context_obj::__boot()
{
	hx::Static(_init) = ::hxgl::cross::Context_obj::l(HX_CSTRING("__HXGL_INIT"),(int)0);
	hx::Static(_init_window) = ::hxgl::cross::Context_obj::l(HX_CSTRING("__HXGL_INIT_WINDOW"),(int)0);
	hx::Static(_create_window) = ::hxgl::cross::Context_obj::l(HX_CSTRING("__HXGL_createWindow"),(int)4);
	hx::Static(_handle_frame) = ::hxgl::cross::Context_obj::l(HX_CSTRING("__HXGL_HANDLEFRAME"),(int)0);
	hx::Static(gl);
	hx::Static(__program);
}

} // end namespace hxgl
} // end namespace cross
