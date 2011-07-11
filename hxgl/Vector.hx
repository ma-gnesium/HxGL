package hxgl;

#if flash
	typedef Vector<T> = flash.Vector<T>;
#else

class Vector_USING
{
	#if cpp
	public static inline function ofArray <T>(cls:Class<flash.Vector<Dynamic>>, a:Array<T>):Array<T>
	{
		return a.copy ();
	}
	#end
}

typedef Vector<T> = Array<T>;
#end