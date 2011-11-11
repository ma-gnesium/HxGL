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
#ifndef INCLUDED_hxgl_cross_data_IndexBuffer
#include <hxgl/cross/data/IndexBuffer.h>
#endif
namespace hxgl{
namespace cross{
namespace data{

Void IndexBuffer_obj::__construct(int id,int numIndices)
{
{
	HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",35)
	this->id = id;
	HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",36)
	this->numIndices = numIndices;
}
;
	return null();
}

IndexBuffer_obj::~IndexBuffer_obj() { }

Dynamic IndexBuffer_obj::__CreateEmpty() { return  new IndexBuffer_obj; }
hx::ObjectPtr< IndexBuffer_obj > IndexBuffer_obj::__new(int id,int numIndices)
{  hx::ObjectPtr< IndexBuffer_obj > result = new IndexBuffer_obj();
	result->__construct(id,numIndices);
	return result;}

Dynamic IndexBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IndexBuffer_obj > result = new IndexBuffer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void IndexBuffer_obj::upload( Array< int > indices,int offset,int numInds){
{
		HX_SOURCE_PUSH("IndexBuffer_obj::upload")
		HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",39)
		::haxe::io::BytesOutput ibuf = ::haxe::io::BytesOutput_obj::__new();
		HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",41)
		{
			HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",41)
			int _g = (int)0;
			HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",41)
			while(((_g < indices->length))){
				HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",41)
				int i = indices->__get(_g);
				HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",41)
				++(_g);
				HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",43)
				ibuf->writeUInt16(i);
			}
		}
		HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",46)
		Array< unsigned char > dt = ibuf->getBytes()->b;
		HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",48)
		::hxgl::cross::Context_obj::gl->bindBuffer(::hxgl::cross::Context_obj::gl->ELEMENT_ARRAY_BUFFER,this->id);
		HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",49)
		::hxgl::cross::Context_obj::gl->bufferSubData(::hxgl::cross::Context_obj::gl->ELEMENT_ARRAY_BUFFER,(int)0,dt->length,dt);
		HX_SOURCE_POS("../../hxgl/cross/data/IndexBuffer.hx",50)
		::hxgl::cross::Context_obj::gl->bindBuffer(::hxgl::cross::Context_obj::gl->ELEMENT_ARRAY_BUFFER,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(IndexBuffer_obj,upload,(void))


IndexBuffer_obj::IndexBuffer_obj()
{
}

void IndexBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(numIndices,"numIndices");
	HX_MARK_END_CLASS();
}

Dynamic IndexBuffer_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { return numIndices; }
	}
	return super::__Field(inName);
}

Dynamic IndexBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { numIndices=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void IndexBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("numIndices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("upload"),
	HX_CSTRING("id"),
	HX_CSTRING("numIndices"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class IndexBuffer_obj::__mClass;

void IndexBuffer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("hxgl.cross.data.IndexBuffer"), hx::TCanCast< IndexBuffer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void IndexBuffer_obj::__boot()
{
}

} // end namespace hxgl
} // end namespace cross
} // end namespace data
