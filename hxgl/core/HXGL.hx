/*
    Rigging for the CFFI to ease in code deployment, and prevent typing errors.
    Please never directly access externs, use this class instead.    
 */


package hxgl.core;

import hxgl.core.GLenums;
import haxe.io.BytesData;

#if flash
    #error
#elseif cpp
    import cpp.Lib;
#elseif neko
    #error
#elseif js
    #error
#elseif php
    #error
#elseif java
    #error
#elseif cs
    #error
#end

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
    public static inline function setVertexBufferAt(index:Int, vboID:Int, 
                                                    bufferOffset:Int, 
                                                    format:String, hint:String){
        extSetVertexBufferAt (index,vboID,bufferOffset,format,hint);
    }
    public static inline function uploadFromByteArrayVertex(vboID:Int, 
                                                            data:BytesData, 
                                                            byteArrayOffset:Int, 
                                                            startOffset:Int, 
                                                            totalBytes:Int){
        extUploadFromByteArrayVertex (vboID,data,byteArrayOffset,
                                      startOffset,totalBytes);
    }
    public static inline function uploadFromByteArrayIndex(iboID:Int, 
                                                            data:BytesData, 
                                                            byteArrayOffset:Int, 
                                                            startOffset:Int, 
                                                            totalBytes:Int){
        extUploadFromByteArrayIndex (iboID,data,byteArrayOffset,
                                      startOffset,totalBytes);
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


    public static inline function getDigital (id:Int):Int{
        return extGetDigital (id);
    }

    public static inline function getToggle (id:Int):Bool{
        return extGetToggle (id);
    }

    public static function LINK_LIB ()
    {
            extSetEnterFrame = Lib.load (DOMAIN,EXT("setEnterFrame"), 1);
            extInit = Lib.load (DOMAIN,EXT("init"), 2);
            extClear = Lib.load (DOMAIN,EXT("clear"), 7);
            extConfigureBackBuffer = Lib.load (DOMAIN,EXT("configureBackBuffer"), 4);
            extCreateVertexBuffer = Lib.load (DOMAIN,EXT("createVertexBuffer"), 1);
            extCreateIndexBuffer = Lib.load (DOMAIN,EXT("createIndexBuffer"), 1);
            extDrawTriangles = Lib.load (DOMAIN,EXT("drawTriangles"), 3);
            extSetCulling = Lib.load (DOMAIN,EXT("setCulling"), 1);
            extSetDepthTest = Lib.load (DOMAIN,EXT("setDepthTest"), 2);
            extSetVertexBufferAt = Lib.load (DOMAIN,EXT("setVertexBufferAt"), 5);
            extUploadFromByteArrayVertex = Lib.load (DOMAIN,EXT("uploadFromByteArrayVertex"), 5);
            extUploadFromByteArrayIndex = Lib.load (DOMAIN,EXT("uploadFromByteArrayIndex"), 5);

            extCreateProgram = Lib.load (DOMAIN,EXT("createProgram"),0);
            extUploadProgram = Lib.load (DOMAIN,EXT("uploadProgram"),3);
            extSetProgram = Lib.load (DOMAIN,EXT("setProgram"),1);
            extDisposeProgram = Lib.load (DOMAIN,EXT("disposeProgram"),1);

            extGetDigital = Lib.load (DOMAIN,EXT("getDigital"),1);
            extGetToggle = Lib.load (DOMAIN,EXT("getToggle"),1);
    }
    
    static inline var DOMAIN:String = "hxgl";
    static inline var EXTENSION:String = "hxgl_";
    static inline function EXT(s:String){
        return EXTENSION + s;
    }
    static var extSetEnterFrame;
    static var extInit;
    static var extClear;
    static var extConfigureBackBuffer;
    static var extCreateVertexBuffer;
    static var extCreateIndexBuffer;
    static var extDrawTriangles;
    static var extSetCulling;
    static var extSetDepthTest;
    static var extSetVertexBufferAt;
    static var extUploadFromByteArrayVertex;
    static var extUploadFromByteArrayIndex;

    static var extCreateProgram;
    static var extUploadProgram;
    static var extSetProgram;
    static var extDisposeProgram;

    static var extGetDigital;
    static var extGetToggle;
}
