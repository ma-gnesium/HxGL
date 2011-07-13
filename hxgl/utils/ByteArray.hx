package hxgl.utils;




#if cpp
import haxe.io.Bytes;
import haxe.io.BytesData;

class ByteArray
{
	var b:BytesData;
	public var position:Int;
	public function new (length:Int)
	{
		b = Bytes.alloc (length).getData ();
		position = 0;
	}
	
	inline function select ()
	{
		untyped __hxcpp_memory_select (b);
	}
	
	inline function cbounds ()
	{
		if (position > b.length) throw "Out of bounds: " + position;
		if (position < 0) throw "Out of bounds: " + position;
	}
	
	public inline function writeFloat (v:Float)
	{
		select ();
		cbounds ();
		untyped __hxcpp_memory_set_float (position, v);
		position += 4;
	}
	
	public inline function writeByte (v:Int)
	{
		select ();
		cbounds ();
		untyped __hxcpp_memory_set_byte (position, v);
		position ++;
	}
	
	/*public inline function readFloat ()
	{
		select ();
		var v = 6; // untyped __hxcpp_memory_get_float (gpos (position, 4));
		position += 4;
		return v;
	}
	*/
	
	public function getData () return b
}
#end