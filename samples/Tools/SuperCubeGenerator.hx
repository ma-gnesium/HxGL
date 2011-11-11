package ;

class SuperCubeGenerator 
{

	static var v:Array<Float>;
	#if flash
	static var i:Array<UInt>;
	#else
	static var i:Array<Int>;
	#end

	static var i_accum:Int = 0;
	
	public static function subDivideCube3D( x:Float, y:Float, z:Float, size:Float, ncubes:Int )
	{
		i_accum = 0;
		v = new Array<Float> ();
		#if flash
		i = new Array<UInt> ();
		#else
		i = new Array<Int> ();
		#end
		
		var ntotalcubes:Int = ncubes * 2 - 1;
		var hsize:Float = size * .5;
		
		var cubewidth:Float = size / ntotalcubes;
		var hcubewidth:Float = cubewidth * .5;
		var dcubewidth:Float = cubewidth * 2;
		
		var startx:Float = x - hsize + hcubewidth;
		var starty:Float = y - hsize + hcubewidth;
		var startz:Float = z - hsize + hcubewidth;
		
		var endx:Float = x + hsize;
		var endy:Float = y + hsize;
		var endz:Float = z + hsize;
		
		var ix:Float;
		var iy:Float;
		var iz:Float;
		
		var ind:Int = 0;
		
		iz = startz;
		while ( iz < endz )
		{
			iy = starty;
			while ( iy < endy )
			{
				ix = startx;
				while ( ix < endx )
				{
					drawICube ( ix, iy, iz, cubewidth, v, i);
					i_accum += 8;
					ix += dcubewidth;
				}
				iy += dcubewidth;
			}
			iz += dcubewidth;
		}
		
		i_accum = 0;
		return {v:v,i:i};
	}
	
	public static function drawICube (x:Float, y:Float, z:Float, width:Float, ?v, ?i)
	{
		var h = width *.5;
		
		if (v == null)
			v = new Array<Float> ();	//verts
		if (i == null)
			i = new Array<#if flash UInt #else Int #end> ();	//inds

		v.push (x-h); v.push (y+h); v.push (z-h); //v.push (0.0); v.push (1.0);		//front
		v.push (x+h); v.push (y+h); v.push (z-h); //v.push (1.0); v.push (1.0);
		v.push (x+h); v.push (y-h); v.push (z-h); //v.push (1.0); v.push (0.0);	
		v.push (x-h); v.push (y-h); v.push (z-h); //v.push (0.0); v.push (0.0);	

		v.push (x-h); v.push (y+h); v.push (z+h); //v.push (1.0); v.push (1.0);		//back
		v.push (x+h); v.push (y+h); v.push (z+h); //v.push (0.0); v.push (1.0);	
		v.push (x+h); v.push (y-h); v.push (z+h); //v.push (0.0); v.push (0.0);	
		v.push (x-h); v.push (y-h); v.push (z+h); //v.push (1.0); v.push (0.0);

		i.push (3 + i_accum); i.push (1 + i_accum); i.push (0 + i_accum);		//front
		i.push (3 + i_accum); i.push (2 + i_accum); i.push (1 + i_accum);

		i.push (0 + i_accum); i.push (5 + i_accum); i.push (4 + i_accum);		//top
		i.push (0 + i_accum); i.push (1 + i_accum); i.push (5 + i_accum);

		i.push (2 + i_accum); i.push (5 + i_accum); i.push (1 + i_accum);		//right
		i.push (2 + i_accum); i.push (6 + i_accum); i.push (5 + i_accum);

		i.push (3 + i_accum); i.push (6 + i_accum); i.push (7 + i_accum);		//bottom
		i.push (3 + i_accum); i.push (2 + i_accum); i.push (6 + i_accum);

		i.push (6 + i_accum); i.push (5 + i_accum); i.push (4 + i_accum);		//back
		i.push (7 + i_accum); i.push (6 + i_accum); i.push (4 + i_accum);

		i.push (0 + i_accum); i.push (7 + i_accum); i.push (4 + i_accum);		//left
		i.push (0 + i_accum); i.push (3 + i_accum); i.push (7 + i_accum);	

		return {v:v,i:i};
	}


}














