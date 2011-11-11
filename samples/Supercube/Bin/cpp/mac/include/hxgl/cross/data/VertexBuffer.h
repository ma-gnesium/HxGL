#ifndef INCLUDED_hxgl_cross_data_VertexBuffer
#define INCLUDED_hxgl_cross_data_VertexBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxgl,cross,data,VertexBuffer)
namespace hxgl{
namespace cross{
namespace data{


class VertexBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexBuffer_obj OBJ_;
		VertexBuffer_obj();
		Void __construct(int id,int bsize);

	public:
		static hx::ObjectPtr< VertexBuffer_obj > __new(int id,int bsize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~VertexBuffer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("VertexBuffer"); }

		virtual Void upload( Array< double > vertices,int offset,int numVerts);
		Dynamic upload_dyn();

		int id; /* REM */ 
		int __bsize; /* REM */ 
};

} // end namespace hxgl
} // end namespace cross
} // end namespace data

#endif /* INCLUDED_hxgl_cross_data_VertexBuffer */ 
