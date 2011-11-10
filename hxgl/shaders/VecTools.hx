package hxgl.shaders;

class VecTools {
	#if flash
	public static inline function vec<T> (a:Array<T>):flash.Vector<T> {
		var v = new flash.Vector<T> ();
		for (x in a) v.push (x);
		return v;
	}
	#end
}