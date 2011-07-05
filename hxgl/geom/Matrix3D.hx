/**
 * ...
 * @author Matthew Spencer
 */

package hxgl.geom;

#if flash
typedef Matrix3D = flash.geom.Matrix3D;
#else
class Matrix3D 
{
	public var rawData:flash.Vector<Float>;
	
	public function new(v : flash.Vector<Float>) 
	{
	    rawData = new flash.Vector<Float> ();

        rawData = v.copy ();
	}
	
	public function appendRotation (degrees:Float, axis:Vector3D, ?pivotPoint :Vector3D)
	{
		throw "Matrix3D::appendRotation(): stub";		
	}
}
#end
