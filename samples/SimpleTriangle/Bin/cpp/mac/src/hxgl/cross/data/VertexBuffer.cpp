#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_hxgl_core_GL
#include <hxgl/core/GL.h>
#endif
#ifndef INCLUDED_hxgl_cross_Context
#include <hxgl/cross/Context.h>
#endif
#ifndef INCLUDED_hxgl_cross_data_VertexBuffer
#include <hxgl/cross/data/VertexBuffer.h>
#endif
namespace hxgl{
namespace cross{
namespace data{

Void VertexBuffer_obj::__construct(int id,int bsize)
{
{
	HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",34)
	this->id = id;
	HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",35)
	this->__bsize = bsize;
}
;
	return null();
}

VertexBuffer_obj::~VertexBuffer_obj() { }

Dynamic VertexBuffer_obj::__CreateEmpty() { return  new VertexBuffer_obj; }
hx::ObjectPtr< VertexBuffer_obj > VertexBuffer_obj::__new(int id,int bsize)
{  hx::ObjectPtr< VertexBuffer_obj > result = new VertexBuffer_obj();
	result->__construct(id,bsize);
	return result;}

Dynamic VertexBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexBuffer_obj > result = new VertexBuffer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void VertexBuffer_obj::upload( Array< double > vertices,int offset,int numVerts){
{
		HX_SOURCE_PUSH("VertexBuffer_obj::upload")
		HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",38)
		::haxe::io::BytesOutput vbuf = ::haxe::io::BytesOutput_obj::__new();
		HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",40)
		{
			HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",40)
			int _g = (int)0;
			HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",40)
			while(((_g < vertices->length))){
				HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",40)
				double v = vertices->__get(_g);
				HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",40)
				++(_g);
				HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",42)
				vbuf->writeFloat(v);
			}
		}
		HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",45)
		Array< unsigned char > dt = vbuf->getBytes()->b;
		HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",47)
		::hxgl::cross::Context_obj::gl->bindBuffer(::hxgl::cross::Context_obj::gl->ARRAY_BUFFER,this->id);
		HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",48)
		::hxgl::cross::Context_obj::gl->bufferSubData(::hxgl::cross::Context_obj::gl->ARRAY_BUFFER,(int)0,dt->length,dt);
		HX_SOURCE_POS("../../hxgl/cross/data/VertexBuffer.hx",49)
		::hxgl::cross::Context_obj::gl->bindBuffer(::hxgl::cross::Context_obj::gl->ARRAY_BUFFER,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexBuffer_obj,upload,(void))


VertexBuffer_obj::VertexBuffer_obj()
{
}

void VertexBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(__bsize,"__bsize");
	HX_MARK_END_CLASS();
}

Dynamic VertexBuffer_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__bsize") ) { return __bsize; }
	}
	return super::__Field(inName);
}

Dynamic VertexBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__bsize") ) { __bsize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void VertexBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("__bsize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("upload"),
	HX_CSTRING("id"),
	HX_CSTRING("__bsize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class VertexBuffer_obj::__mClass;

void VertexBuffer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxgl.cross.data.VertexBuffer"), hx::TCanCast< VertexBuffer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void VertexBuffer_obj::__boot()
{
}

} // end namespace hxgl
} // end namespace cross
} // end namespace data
