#ifndef INCLUDED_hxgl_cross_data_IndexBuffer
#define INCLUDED_hxgl_cross_data_IndexBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxgl,cross,data,IndexBuffer)
namespace hxgl{
namespace cross{
namespace data{


class IndexBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IndexBuffer_obj OBJ_;
		IndexBuffer_obj();
		Void __construct(int id,int numIndices);

	public:
		static hx::ObjectPtr< IndexBuffer_obj > __new(int id,int numIndices);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IndexBuffer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("IndexBuffer"); }

		virtual Void upload( Array< int > indices,int offset,int numInds);
		Dynamic upload_dyn();

		int id; /* REM */ 
		int numIndices; /* REM */ 
};

} // end namespace hxgl
} // end namespace cross
} // end namespace data

#endif /* INCLUDED_hxgl_cross_data_IndexBuffer */ 
