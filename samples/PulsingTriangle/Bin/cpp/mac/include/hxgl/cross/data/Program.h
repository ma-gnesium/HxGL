#ifndef INCLUDED_hxgl_cross_data_Program
#define INCLUDED_hxgl_cross_data_Program

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxgl,cross,data,Program)
namespace hxgl{
namespace cross{
namespace data{


class Program_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Program_obj OBJ_;
		Program_obj();
		Void __construct(int prog);

	public:
		static hx::ObjectPtr< Program_obj > __new(int prog);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Program_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Program"); }

		virtual Void upload( ::String vertexProgram,::String fragmentProgram);
		Dynamic upload_dyn();

		int __prog; /* REM */ 
		int __vertex; /* REM */ 
		int __fragment; /* REM */ 
};

} // end namespace hxgl
} // end namespace cross
} // end namespace data

#endif /* INCLUDED_hxgl_cross_data_Program */ 
