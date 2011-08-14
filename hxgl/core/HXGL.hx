/* IMPORTANT! This file is outdated, replaced by hxgl.core.GL/Window
 *
    Rigging for externs to ease in code deployment, and prevent typing errors.
    Please never directly access externs, use this class instead.   
	It ensures that the external functions are properly loaded and set correctly.
 */


package hxgl.core;

import hxgl.core.GLenums;
import haxe.io.BytesData;
import hxgl.display3D.textures.Texture;
import hxgl.Vector;
import hxgl.Vector;


class HXGL
{
	public static inline function setEnterFrame (fnc:Void->Void){
		extSetEnterFrame (fnc);
	}
	public static inline function init (major:Int = 0, minor:Int = 0){
		extInit (major,minor);
	}
	public static inline function clear(red:Float, green:Float, blue:Float, 
										alpha:Float, depth:Float, stencil:Int, 
										mask:Int){
		extClear (red,green,blue,alpha,depth,stencil,mask);
	}
	public static inline function configureBackBuffer(width:Int, height:Int, 
													  antiAlias:Int, 
													  enableDepthAndStencil:Bool){
		extConfigureBackBuffer (width,height,antiAlias,enableDepthAndStencil);
	}
	public static inline function createVertexBuffer(sizeBytes:Int){
		return extCreateVertexBuffer (sizeBytes);
	}
	public static inline function createIndexBuffer(sizeBytes:Int){
		return extCreateIndexBuffer (sizeBytes);
	}
	public static inline function drawTriangles(iboID:Int, firstIndex:Int, numTriangles:Int){
		extDrawTriangles (iboID,firstIndex,numTriangles);
	}
	public static inline function setCulling(triangleFaceToCull:String){
		extSetCulling (triangleFaceToCull);
	}
	public static inline function setDepthTest(depthMask:Bool, passCompareMode:String){
		extSetDepthTest (depthMask, passCompareMode);
	}
	public static inline function setVertexBufferAt(location:String, vboID:Int, 
													bufferOffset:Int, stride:Int,
													format:String){
		extSetVertexBufferAt (location,vboID,bufferOffset,stride,format);
	}
	public static inline function uploadFromByteArrayVertex(vboID:Int, 
															data:BytesData, 
															byteArrayOffset:Int, 
															startOffset:Int, 
															totalBytes:Int){
		extUploadFromByteArrayVertex (vboID,data,byteArrayOffset,
									  startOffset,totalBytes);
	}
	public static inline function uploadFromVectorVertex(vboID:Int, 
														 data:Vector<Float>, 
														 startEntry:Int, 	//Entry, not vertex
														 numEntries:Int){	//Entry, not vertex
		extUploadFromVectorVertex (vboID,data,
									  startEntry,numEntries);
	}	
	public static inline function uploadFromByteArrayIndex(iboID:Int, 
															data:BytesData, 
															byteArrayOffset:Int, 
															startOffset:Int, 
															totalBytes:Int){
		extUploadFromByteArrayIndex (iboID,data,byteArrayOffset,
									  startOffset,totalBytes);
	}
	public static inline function uploadFromVectorIndex(iboID:Int, 
												 data:Vector<Int>, 
												 startEntry:Int, 	    //Entry, not vertex
												 numEntries:Int) {    	//Entry, not vertex
		extUploadFromVectorIndex (iboID, data, startEntry, numEntries);
	}
	public static inline function createProgram (){
		return extCreateProgram ();
	}
	public static inline function uploadProgram (program:Int, vertexProgram:String, 
												 fragmentProgram:String){
		extUploadProgram (program, vertexProgram, fragmentProgram);
	}
	public static inline function setProgram (program:Int){
		extSetProgram (program);
	}
	public static inline function disposeProgram (program:Int){
		extDisposeProgram (program);
	}

	public static inline function createTexture (width:Int, height:Int, format:String, 
												 optimizeForRenderToTexture:Bool):Int {
		return extCreateTexture (width, height, format, optimizeForRenderToTexture);
	}

	public static inline function uploadFromByteArrayTexture (tID:Int, data:BytesData, 
															  byteArrayOffset:Int, 
															  width:Int, height:Int) {
		extUploadFromByteArrayTexture (tID, data, byteArrayOffset, width, height);
	}
	public static inline function setTextureAt (location:String, sampler:Int, texture:Int) {
		extSetTextureAt (location, sampler, texture);
	}
	public static inline function setMatrixAt (location:String, count:Int, transpose:Bool, data:Vector<Float>) {
		extSetMatrixAt (location, count, transpose, data);
	}
	public static inline function disposeTexture (tID:Int) {
		extDisposeTexture (tID);
	}
	public static inline function disposeBuffer (boID:Int) {
		extDisposeBuffer (boID);
	}
	
	public static inline function getDigital (id:Int):Int{
		return extGetDigital (id);
	}

	public static inline function getToggle (id:Int):Bool{
		return extGetToggle (id);
	}

	public static function LINK_LIB ()
	{
		trace ("Linking library");
		extSetEnterFrame = load("setEnterFrame", 1);
		extInit = load("init", 2);
		extClear = load("clear", 7);
		extConfigureBackBuffer = load("configureBackBuffer", 4);
		extCreateVertexBuffer = load("createVertexBuffer", 1);
		extCreateIndexBuffer = load("createIndexBuffer", 1);
		extDrawTriangles = load("drawTriangles", 3);
		extSetCulling = load("setCulling", 1);
		extSetDepthTest = load("setDepthTest", 2);
		extSetVertexBufferAt = load("setVertexBufferAt", 5);
		extUploadFromByteArrayVertex = load("uploadFromByteArrayVertex", 5);
		extUploadFromVectorVertex = load("uploadFromVectorVertex", 4);
		extUploadFromByteArrayIndex = load("uploadFromByteArrayIndex", 5);
		extUploadFromVectorIndex = load ("uploadFromVectorIndex", 4);

		extCreateProgram = load("createProgram",0);
		extUploadProgram = load("uploadProgram",3);
		extSetProgram = load("setProgram",1);
		extDisposeProgram = load("disposeProgram",1);

		extCreateTexture = load("createTexture", 4);
		extUploadFromByteArrayTexture = load("uploadFromByteArrayTexture", 5);
		extSetTextureAt = load ("setTextureAt", 3);
		
		extSetMatrixAt = load ("setMatrixAt", 4);
		
		extDisposeTexture = load("disposeTexture", 1);
		extDisposeBuffer = load("disposeBuffer", 1);
		
		extGetDigital = load("getDigital",1);
		extGetToggle = load("getToggle",1);
	}
		
	static var DOMAIN:String = "hxgl";
	static var EXTENSION:String = "hxgl_";
	static inline function EXT(s:String){
		return EXTENSION + s;
	}
	static function load (s:String, params:Int)
	{
		#if cpp
			var f:Dynamic = cpp.Lib.load (DOMAIN,EXT(s), params);
			#if (debug && !HXGL_LIB_NOVERIFY)
				if (0 == f) throw "hxgl library is invalid\nMissing extension: " + s;
			#end
			if (0 == f) {
				f = function () { 
					trace ("Unloaded extension: " + s + " was called. Halting in 10 seconds."); 
					cpp.Sys.sleep (10); throw "Critical Error"; 
				}
			};
			return f;
		#elseif js
			js.Lib.eval ("if (typeof HXGL ==='undefined') alert ('HXGL library not in path');");
			var f:Dynamic = js.Lib.eval ("HXGL." + s);
			#if (debug && !HXGL_LIB_NOVERIFY)
				if (null == f) js.Lib.alert ("hxgl library is invalid\nMissing extension: " + s);
			#end
			if (null == f) {
				f = function () {
					js.Lib.alert ("Call to unloaded extension: " + s); 
				}
			}
			return f;
		#else
			throw "This platform is not currently supported by HxGL.";
		#end
	}
	static var extSetEnterFrame:Dynamic;
	static var extInit:Dynamic;
	static var extClear:Dynamic;
	static var extConfigureBackBuffer:Dynamic;
	static var extCreateVertexBuffer:Dynamic;
	static var extCreateIndexBuffer:Dynamic;
	static var extDrawTriangles:Dynamic;
	static var extSetCulling:Dynamic;
	static var extSetDepthTest:Dynamic;
	static var extSetVertexBufferAt:Dynamic;
	static var extUploadFromByteArrayVertex:Dynamic;
	static var extUploadFromVectorVertex:Dynamic;
	static var extUploadFromByteArrayIndex:Dynamic;
	static var extUploadFromVectorIndex:Dynamic;

	static var extCreateProgram:Dynamic;
	static var extUploadProgram:Dynamic;
	static var extSetProgram:Dynamic;
	static var extDisposeProgram:Dynamic;

	static var extCreateTexture:Dynamic;
	static var extUploadFromByteArrayTexture:Dynamic;
	static var extSetTextureAt:Dynamic;
	
	static var extSetMatrixAt:Dynamic;
	
	static var extDisposeTexture:Dynamic;
	static var extDisposeBuffer:Dynamic;
	
	static var extGetDigital:Dynamic;
	static var extGetToggle:Dynamic;
}
