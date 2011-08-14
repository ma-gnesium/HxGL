package hxgl.core;

/*******************************************************************************
    THIS FILE IS GENERATED BY SCRIPT AND SHOULD NOT BE EDITED
*******************************************************************************/

typedef View = Dynamic;
typedef Program = Dynamic;
typedef Shader = Dynamic;
typedef Buffer = Dynamic;
typedef GLEnum = Dynamic;
typedef Texture = Dynamic;

#if js
@:native( "WebGLRenderingContext" ) 
extern class GL 
{
    public function viewport (x:Int, y:Int, width:Int, height:Int):Void;   
    public function clearColor (red:Float, green:Float, blue:Float, alpha:Float):Void;
    public function clear (flags:Int):Void;
    public function enable (flag:GLEnum):Void;
    public function disable (flag:GLEnum):Void;
    public function clearDepth (depth:Float):Void;
    public function bindBuffer (target:GLEnum, buffer:Buffer):Void;
    public function bufferData (target:GLEnum, size:Int, type:GLEnum):Void;
    public function bufferSubData (target:GLEnum, offset:Int, data:View):Void;
    public function drawElements (target:GLEnum, num:Int, type:GLEnum, offset:Int):Void;
    public function createProgram ():Program;
    public function createShader (type:Int):Shader;
    public function shaderSource (shader:Shader, code:String):Void;
    public function compileShader (shader:Shader):Void;
    public function getShaderParameter (shader:Shader, param:GLEnum):Dynamic;
    public function deleteShader (shader:Shader):Void;
    public function attachShader (program:Program, shader:Shader):Void;
    public function linkProgram (program:Program):Void;
    public function getProgramParameter (program:Program, param:GLEnum):Dynamic;
    public function deleteProgram (program:Program):Void;
    public function useProgram (program:Program):Void;
    public function getAttribLocation (program:Program, location:String):Dynamic;
    public function disableVertexAttribArray (locindex:Dynamic):Void;
    public function enableVertexAttribArray (locindex:Dynamic):Void;
    public function vertexAttribPointer (locindex:Dynamic, size:Int, type:GLEnum, normalize:Bool, stride:Int, bufferOffset:Int):Void;
    public function cullFace (flag:GLEnum):Void;
    public function depthMask (status:Bool):Void;
    public function depthFunc (flag:GLEnum):Void;
    public function createTexture ():Texture;
    public function bindTexture (target:GLEnum, texture:Texture):Void;
    public function texParameteri (target:GLEnum, a:GLEnum, b:GLEnum):Void;

    //Defines
    public var COLOR_BUFFER_BIT:Int;
    public var DEPTH_BUFFER_BIT:Int;
    public var STENCIL_BUFFER_BIT:Int;
}
#elseif cpp
class GL
{
    public function new ()
    {
        COLOR_BUFFER_BIT = 0x00004000;
        DEPTH_BUFFER_BIT = 0x00000100;
        STENCIL_BUFFER_BIT = 0x00004000;
        TRIANGLES = 0x0004;
        ARRAY_BUFFER = 0x8892;
        ELEMENT_ARRAY_BUFFER = 0x8893;
    }
    public function viewport (x:Int, y:Int, width:Int, height:Int):Void 
        _viewport( x, y, width, height )   
    public function clearColor (red:Float, green:Float, blue:Float, alpha:Float):Void
        _clearColor( red, green, blue, alpha )   
    public function clear (flags:Int):Void
        _clear( flags )
    public function enable (flag:GLEnum):Void
        _enable( flag )
    public function disable (flag:GLEnum):Void
        _disable( flag )
    public function clearDepth (depth:Float):Void
        _clearDepth( depth )
    public function bindBuffer (target:GLEnum, buffer:Buffer):Void
        _bindBuffer( target, buffer )
    public function bufferData (target:GLEnum, size:Int, type:GLEnum):Void
        _bufferData( target, size, null, type ) //Hack since ogl spec differs
    public function bufferSubData (target:GLEnum, offset:Int, data:View):Void
        _bufferSubData( target, offset, data.length, data ) //Hack since ogl spec differs
    public function drawElements (target:GLEnum, num:Int, type:GLEnum, offset:Int):Void
        _drawElements( target, num, type, offset)
    public function createProgram ():Program
        return _createProgram( )
    public function createShader (type:Int):Shader
        return _createShader( )
    public function shaderSource (shader:Shader, code:String):Void
        _shaderSource( shader, code )
    public function compileShader (shader:Shader):Void
        _compileShader( shader )
    public function getShaderParameter (shader:Shader, param:GLEnum):Dynamic
        return _getShaderParameter( shader, param )
    public function deleteShader (shader:Shader):Void
        _deleteShader( shader )
    public function attachShader (program:Program, shader:Shader):Void
        _attachShader( program, shader )
    public function linkProgram (program:Program):Void
        _linkProgram( program )
    public function getProgramParameter (program:Program, param:GLEnum):Dynamic
        return _getProgramParameter( program, param )
    public function deleteProgram (program:Program):Void
        _deleteProgram( program )
    public function useProgram (program:Program):Void
        _useProgram( program )
    public function getAttribLocation (program:Program, location:String):Dynamic
        return _getAttribLocation( program, location )
    public function disableVertexAttribArray (locindex:Dynamic):Void
        _disableVertexAttribArray( locindex )
    public function enableVertexAttribArray (locindex:Dynamic):Void
        _enableVertexAttribArray( locindex )
    public function vertexAttribPointer (locindex:Dynamic, size:Int, type:GLEnum, normalize:Bool, stride:Int, bufferOffset:Int):Void
        _vertexAttribPointer( locindex, size, type, normalize, stride, bufferOffset )
    public function cullFace (flag:GLEnum):Void
        _cullFace( flag )
    public function depthMask (status:Bool):Void
        _depthMask( status )
    public function depthFunc (flag:GLEnum):Void
        _depthFunc( flag )
    public function createTexture ():Texture
        return _createTexture( )
    public function bindTexture (target:GLEnum, texture:Texture):Void
        _bindTexture( target, texture )
    public function texParameteri (target:GLEnum, a:GLEnum, b:GLEnum):Void
        _texParameteri( target, a, b )

    //Defines
    public var COLOR_BUFFER_BIT:Int;
    public var DEPTH_BUFFER_BIT:Int;
    public var STENCIL_BUFFER_BIT:Int;
    public var TRIANGLES:Int;
    public var ARRAY_BUFFER:Int;
    public var ELEMENT_ARRAY_BUFFER:Int;

    //Lib imports
    static var _viewport:Dynamic = l("viewport",4);
    static var _clearColor:Dynamic = l("clearColor",4);
    static var _clear:Dynamic = l("clear",1);
    static var _enable:Dynamic = l("enable",1);
    static var _disable:Dynamic = l("disable",1);
    static var _clearDepth:Dynamic = l("clearDepth",1);
    static var _bindBuffer:Dynamic = l("bindBuffer",2);
    static var _bufferData:Dynamic = l("bufferData",4);
    static var _bufferSubData:Dynamic = l("bufferSubData",4);
    static var _drawElements:Dynamic = l("drawElements",4);
    static var _createProgram:Dynamic = l("createProgram",0);
    static var _createShader:Dynamic = l("createShader",1);
    static var _shaderSource:Dynamic = l("shaderSource",2);
    static var _compileShader:Dynamic = l("compileShader",1);
    static var _getShaderParameter:Dynamic = l("getShaderParameter",2);
    static var _deleteShader:Dynamic = l("deleteShader",1);
    static var _attachShader:Dynamic = l("attachShader",2);
    static var _linkProgram:Dynamic  = l("linkProgram",1);
    static var _getProgramParameter:Dynamic = l("getProgramParameter",2);
    static var _deleteProgram:Dynamic = l("deleteProgram",1);
    static var _useProgram:Dynamic = l("useProgram",1);
    static var _getAttribLocation:Dynamic = l("getAttribLocation",2);
    static var _disableVertexAttribArray:Dynamic = l("disableVertexAttribArray",1);
    static var _enableVertexAttribArray:Dynamic = l("enableVertexAttribArray",1);
    static var _vertexAttribPointer:Dynamic = l("vertexAttribPointer",6);
    static var _cullFace:Dynamic = l("cullFace",1);
    static var _depthMask:Dynamic = l("depthMask",1);
    static var _depthFunc:Dynamic = l("depthFunc",1);
    static var _createTexture:Dynamic = l("createTexture",0);
    static var _bindTexture:Dynamic = l("bindTexture",2);
    static var _texParameteri:Dynamic = l("texParameteri",3);
    static function l(id:String, p:Int) return cpp.Lib.load ("gl",id,p)
}
#end

