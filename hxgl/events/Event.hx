package hxgl.events;

#if flash
typedef Event = flash.events.Event;
#else
class Event 
{
	public static var CONTEXT3D_CREATE : String = "context3DCreate";
	public static var ENTER_FRAME : String = "enterFrame";
}
#end
