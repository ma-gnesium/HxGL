#ifndef INCLUDED_haxe_Timer
#define INCLUDED_haxe_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Timer)
namespace haxe{


class Timer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Timer_obj OBJ_;
		Timer_obj();
		Void __construct(int time_ms);

	public:
		static hx::ObjectPtr< Timer_obj > __new(int time_ms);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Timer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Timer"); }

		Dynamic id; /* REM */ 
		virtual Void stop( );
		Dynamic stop_dyn();

		Dynamic run;
		inline Dynamic &run_dyn() {return run; }

		static ::haxe::Timer delay( Dynamic f,int time_ms);
		static Dynamic delay_dyn();

		static Dynamic measure( Dynamic f,Dynamic pos);
		static Dynamic measure_dyn();

		static double stamp( );
		static Dynamic stamp_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Timer */ 
