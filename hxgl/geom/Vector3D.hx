package hxgl.geom;

class Vector3D 
{

	public function new(x:Float=0, y:Float=0, z:Float=0, w:Float=0) 
	{
		this.x = x;
		this.y = y;
		this.z = z;
		this.w = w;
	}
	
	public static var Z_AXIS:Vector3D = new Vector3D (0,0,1,0);
	
	var x:Float;
	var y:Float;
	var z:Float;
	var w:Float;
}
