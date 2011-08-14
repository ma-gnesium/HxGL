/*
    If you edit App.cpp make sure to update the binding in GL.hx too!
*/

#define HXGL_VERIFY_GW          //Ensure that pf and glw are in place on each external call

#ifndef IPHONE
    #define IMPLEMENT_API
#endif

#include "App.h"
#include "InclGLib.h"

//Current support is GLEW ONLY!
//Need some changes for iOS/Android

//Bootstrap code
hxgl::platform::IPlatform *pf;
value __HXGL_INIT( )
{
    pf = hxgl::platform::IPlatform::instance;
    if (NULL == pf)
    {
        HXGL_FATAL_ERROR ("hxgl_init(): Not platform information");
    }
    if (0 == pf->wnd) HXGL_FATAL_ERROR ("hxgl_init(): No window handler");

    pf->wnd->init ();
    pf->wnd->create ();
    pf->wnd->show (true);

    #if !(defined IPHONE || defined ANDROID)
        GLenum err = glewInit ();
        if (GLEW_OK != err)
        {
            HXGL_FATAL_ERROR ("GLEW failed to init");
        }
        HXGL_NOTIFY ("GLEW OK!");
    #endif

    glEnable (GL_DEPTH_TEST);

    return alloc_null( );
}
DEFINE_PRIM( __HXGL_INIT, 0 );

value __HXGL_HANDLEFRAME( )
{
    pf->wnd->swapBuffers( );
    return alloc_bool(
        pf->wnd->process( ) );
}
DEFINE_PRIM( __HXGL_HANDLEFRAME, 0 );


value viewport( value x, value y, value width, value height )
{
    glViewport(
        (GLint)val_int( x ),
        (GLint)val_int( y ),
        (GLint)val_int( width ),
        (GLint)val_int( height ) );
    return alloc_null( );
}
DEFINE_PRIM( viewport, 4 );

value clearColor( value red, value green, value blue, value alpha )
{
    glClearColor(
        (GLclampf)val_float( red ),
        (GLclampf)val_float( green ),
        (GLclampf)val_float( blue ),
        (GLclampf)val_float( alpha ) );    
    return alloc_null( );
}
DEFINE_PRIM( clearColor, 4 );

value clear( value mask )
{
    glClear(
        (GLbitfield)val_int( mask ) );
    return alloc_null( );
}
DEFINE_PRIM( clear, 1 );
                     
value enable( value cap )
{
    glEnable(
        (GLenum)val_int( cap ) );
    return alloc_null( );
}
DEFINE_PRIM( enable, 1 );

value disable( value cap )
{
    glDisable(
        (GLenum)val_int( cap ) );
    return alloc_null( );
}
DEFINE_PRIM( disable, 1 );

value clearDepth( value depth )
{
    glClearDepth(
        (GLclampd)val_int( depth ) );
    return alloc_null( );
}
DEFINE_PRIM( clearDepth, 1 );

//WebGL style bind
value createBuffer( )
{
    GLuint bID;
    glGenBuffers( 1, &bID );
    return alloc_int (bID);
}
DEFINE_PRIM( createBuffer, 0 );

value bindBuffer( value target, value buffer )
{
    glBindBuffer(
        (GLenum)val_int( target ),
        (GLuint)val_int( buffer ) );
    return alloc_null( );
}
DEFINE_PRIM( bindBuffer, 2 );

//data is expected to be a bytearray
//FIXME Extend this like drawElements
value bufferData( value target, value size, value data, value usage )
{
    glBufferData(
        (GLenum)val_int( target ),
        (GLsizeiptr)val_int( size ),
        (const GLvoid *)buffer_data( val_to_buffer ( data ) ),
        (GLenum)val_int( usage ) );
    return alloc_null( );
}
DEFINE_PRIM( bufferData, 4 );

//data is expected to be a bytearray starting at desired position
//FIXME Extend this like drawElements
value bufferSubData( value target, value offset, value size, value data )
{
    glBufferSubData(
        (GLenum)val_int( target ),
        (GLintptr)val_int( offset ),
        (GLsizeiptr)val_int( size ),
        (const GLvoid *)buffer_data( val_to_buffer ( data ) ) );
    return alloc_null( );
}
DEFINE_PRIM( bufferSubData, 4 );

//FIXME indices and bytearrays do not particularly mix
//Does val_to_buffer throw an error on null?
value drawElements( value mode, value count, value type, value indices )
{
    char *ptr = NULL;
    if (val_is_buffer(indices))
    {
        ptr = buffer_data( val_to_buffer ( indices ) );
    }
    else if (val_is_int(indices))
    {
        ptr = ((char *)NULL+val_int(indices));
    }
    glDrawElements(
        (GLenum)val_int( mode ),
        (GLsizei)val_int( count ),
        (GLenum)val_int( type ),
        (const GLvoid *)ptr );
    return alloc_null( );
}
DEFINE_PRIM( drawElements, 4 );

value createProgram( )
{
    return alloc_int(
        glCreateProgram( ) );
}
DEFINE_PRIM( createProgram, 0 );

value createShader( value shaderType )
{
    return alloc_int(
        glCreateShader(
            (GLenum)val_int( shaderType ) ) );
}
DEFINE_PRIM( createShader, 1 );

value shaderSource( value shader, value string )
{
    const GLchar *s[] = {val_string( string )};
    GLint len[] = {val_strlen( string )};

    glShaderSource(
        (GLuint)val_int( shader ),
        (GLsizei)1,
        s,
        len );
    return alloc_null( );
}
DEFINE_PRIM( shaderSource, 2 );

value compileShader( value shader )
{
    glCompileShader(
        (GLuint)val_int( shader ) );
    return alloc_null( );
}
DEFINE_PRIM( compileShader, 1 );

//Adapted to WebGL style
value getShaderParameter( value shader, value pname )
{
    GLint param;
    
    glGetShaderiv(
        (GLuint)val_int( shader ),
        (GLenum)val_int( pname ),
        &param );
    return alloc_int ( param );
}
DEFINE_PRIM( getShaderParameter, 2 );

value deleteShader( value shader )
{
    glDeleteShader(
        (GLuint)val_int( shader ) );
    return alloc_null( );
}
DEFINE_PRIM( deleteShader, 1 );

value attachShader( value program, value shader )
{
    glAttachShader(
        (GLuint)val_int( program ),
        (GLuint)val_int( shader ) );
    return alloc_null( );
}
DEFINE_PRIM( attachShader, 2 );

value linkProgram( value program )
{
    glLinkProgram(
        (GLuint)val_int( program ) );
    return alloc_null( );
}
DEFINE_PRIM( linkProgram, 1 );

//Adapted to WebGL style
value getProgramParameter( value program, value pname )
{
    GLint param;
    
    glGetProgramiv(
        (GLuint)val_int( program ),
        (GLenum)val_int( pname ),
        &param );
    return alloc_int ( param );
}
DEFINE_PRIM( getProgramParameter, 2 );

value deleteProgram( value program )
{
    glDeleteProgram(
        (GLuint)val_int( program ) );
    return alloc_null( );
}
DEFINE_PRIM( deleteProgram, 1 );

value useProgram( value program )
{
    glUseProgram(
        (GLuint)val_int( program ) );
    return alloc_null( );
}
DEFINE_PRIM( useProgram, 1 );

value getAttribLocation( value program, value name )
{
    return alloc_int(
        glGetAttribLocation(
            (GLuint)val_int( program ),
            (const GLchar *)val_string( name ) ) );
}
DEFINE_PRIM( getAttribLocation, 2 );

value disableVertexAttribArray( value index )
{
    glDisableVertexAttribArray(
        (GLuint)val_int( index ) );
    return alloc_null( );
}
DEFINE_PRIM( disableVertexAttribArray, 1 );


value enableVertexAttribArray( value index )
{
    glEnableVertexAttribArray(
        (GLuint)val_int( index ) );
    return alloc_null( );
}
DEFINE_PRIM( enableVertexAttribArray, 1 );

//Be very careful with this, it does not support offsets into buffers yet
value vertexAttribPointer( value *args, int count )
{
    enum {index,size,type,normalized,stride,pointer};
    if (count != 6) throw "vertexAttribPointer invalid parameter length";

    char *ptr = NULL;
    if (val_is_buffer (args[pointer]))
    {
        std::cout << "vertexAttribPointer does not accept data for pointer arg" << std::endl;
        //ptr = buffer_data( val_to_buffer ( args[pointer] ) );
    }
    if (val_is_int (args[pointer]))
    {
        ptr = ((char *)NULL + val_int(args[pointer]));
    }
    glVertexAttribPointer(
        (GLuint)val_int( args[index] ),
        (GLint)val_int( args[size] ),
        (GLenum)val_int( args[type] ),
        (GLboolean)val_bool( args[normalized] ),
        (GLsizei)val_int( args[stride] ),
        (const GLvoid *)ptr );
    return alloc_null( );
}
DEFINE_PRIM_MULT( vertexAttribPointer );

value cullFace( value mode )
{
    glCullFace(
        (GLenum)val_int( mode ) );
    return alloc_null( );
}
DEFINE_PRIM( cullFace, 1 );

value depthMask( value flag )
{
    glDepthMask(
        (GLboolean)val_bool( flag ) );
    return alloc_null( );
}
DEFINE_PRIM( depthMask, 1 );

value depthFunc( value func )
{
    glDepthFunc(
        (GLenum)val_int( func ) );
    return alloc_null( );
}
DEFINE_PRIM( depthFunc, 1 );

//WebGL standards?
value createTexture( )
{
    GLuint tID;
    glGenTextures(
        1,
        &tID );
    return alloc_int(tID);
}
DEFINE_PRIM( createTexture, 0 );

value bindTexture( value target, value texture )
{
    glBindTexture(
        (GLenum)val_int( target ),
        (GLuint)val_int( texture ) );
    return alloc_null( );
}
DEFINE_PRIM( bindTexture, 2 );

value texParameteri( value target, value pname, value param )
{
    glTexParameteri(
        (GLenum)val_int( target ),
        (GLenum)val_int( pname ),
        (GLint)val_int( param ) );
    return alloc_null( );
}
DEFINE_PRIM( texParameteri, 3 );












