package hxgl;

class Vector_USING
{
	#if cpp
	public static inline function ofArray <T>(cls:Class<flash.Vector<Dynamic>>, a:Array<T>):Array<T>
	{
		return a.copy ();
	}
	#end
}
