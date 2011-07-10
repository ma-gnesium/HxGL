/*
    If you edit App.cpp make sure to update the binding in GL.hx too!
*/

#define HXGL_VERIFY_GW          //Ensure that pf and glw are in place on each external call

#ifndef IPHONE
#define IMPLEMENT_API
#endif

#include "App.h"
#include "platform/IPlatform.h"
#include "Log.h"
#ifdef ANDROID
    #include <GLES/gl.h>
    #include <GLES/glext.h>
#elif defined IPHONE
	#import "platform/IPhone.h"
	#import <OpenGLES/ES2/gl.h>
	#import <OpenGLES/ES2/glext.h>
#else
    #include <GL/glew.h>
#endif

hxgl::platform::IPlatform *pf;

value eframe;

void eCallback ()
{
    if (val_is_function(eframe))
    {  
        val_call0 (eframe);
    }
}

value hxgl_setEnterFrame(value efnc)
{
    HXGL_NOTIFY ("recieved enter frame registration request");
    eframe = efnc;
    return alloc_null();
}
DEFINE_PRIM(hxgl_setEnterFrame,1);

value hxgl_init (value forceMajor, value forceMinor)
{
	HXGL_NOTIFY ("hxgl_init\n");
	#ifdef IPHONE
	if (NULL == pf)
	{
		hxgl::platform::IPlatform::instance = new hxgl::platform::IPhone;
	}
	#endif
    pf = hxgl::platform::IPlatform::instance;

    if (NULL == pf)
    {
        HXGL_FATAL_ERROR ("hxgl_init(): Not platform selected");
    }
	
    if (0 == pf->wnd) HXGL_FATAL_ERROR ("hxgl_init(): glw is null");

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

    #if !(defined IPHONE || defined ANDROID) //FIXME glGetString crashes on android emulator
        HXGL_NOTIFY ("Attempting to aquire opengl version");
        
        const unsigned char *glVer = glGetString(GL_VERSION);

        unsigned int major = glVer[0] - 0x30;
        unsigned int minor = glVer[2] - 0x30;

        unsigned int fmajor = val_int (forceMajor);
        unsigned int fminor = val_int (forceMinor);

        char glInfos[100];
        sprintf (glInfos, "Gl(%d.%d) Forced(%d.%d)", major, minor, fmajor, fminor);
        HXGL_NOTIFY (glInfos);

        if (fmajor != 0) major = fmajor;
        if (fminor != 0) minor = fminor;
    #else
        //No version detection, support lowest available.
        unsigned int major = 1;
        unsigned int minor = 1;
    #endif

    pf->allocateGLW (major, minor);
    
    if (pf->glw == 0) HXGL_FATAL_ERROR ("hxgl_init(): glw is null");    

    pf->enterFrameCallback = eCallback;
    pf->beginMain ();

    return alloc_null();
}
DEFINE_PRIM(hxgl_init,2);

//******************
//** Render Calls **
//******************

value hxgl_clear (value *args, int count)
{
    if (count != 7) HXGL_ERROR ("hxgl_clear: Invalid param count");

    #ifdef HXGL_VERIFY_GW
    if (NULL == pf) HXGL_FATAL_ERROR ("hxgl_clear: pf is null");
    if (NULL == pf->glw) HXGL_FATAL_ERROR ("hxgl_clear: pf is null");
    #endif
    
    pf->glw->clear (
        val_float (args[0]), 
        val_float (args[1]),
        val_float (args[2]),
        val_float (args[3]),
        val_float (args[4]),
        val_int (args[5]),
        val_int (args[6]));
        
    return alloc_null ();
}
DEFINE_PRIM_MULT (hxgl_clear);

value hxgl_configureBackBuffer (value width, value height, 
                                value antiAlias, value enableDepthAndStencil)
{
    pf->glw->configureBackBuffer (
        val_int (width),
        val_int (height),
        val_int (antiAlias),
        val_bool (enableDepthAndStencil));


    return alloc_null ();
}
DEFINE_PRIM (hxgl_configureBackBuffer, 4);

//value hxgl_createCubeTexture //TODO implement createCubeTexture

value hxgl_createVertexBuffer (value size)
{
    unsigned int id = pf->glw->createVertexBuffer (val_int (size));

    return alloc_int (id);
}
DEFINE_PRIM (hxgl_createVertexBuffer, 1);

value hxgl_createIndexBuffer (value size)
{
    unsigned int id = pf->glw->createVertexBuffer (val_int (size));

    return alloc_int (id);
}
DEFINE_PRIM (hxgl_createIndexBuffer, 1);

value hxgl_drawTriangles (value iboID, value firstIndex, value numTriangles)
{
    pf->glw->drawTriangles (
        val_int (iboID), 
        val_int (firstIndex), 
        val_int (numTriangles));

    return alloc_null ();
}
DEFINE_PRIM (hxgl_drawTriangles, 3);

value hxgl_setCulling (value triangleFaceToCull)
{
    pf->glw->setCulling (val_string (triangleFaceToCull));

    return alloc_null ();
}
DEFINE_PRIM (hxgl_setCulling, 1);

value hxgl_setDepthTest (value depthMask, value passCompareMode)
{
    pf->glw->setDepthTest (
        val_bool (depthMask),
        val_string (passCompareMode));

    return alloc_null ();
}
DEFINE_PRIM (hxgl_setDepthTest, 2);

value hxgl_setVertexBufferAt (value index, value vboID, value bufferOffset, 
                                    value format, value hint)
{
    pf->glw->setVertexBufferAt (
        val_int (index),
        val_int (vboID),
        val_int (bufferOffset),
        val_string (format),
        val_string (hint));
        
    return alloc_null ();
}
DEFINE_PRIM (hxgl_setVertexBufferAt, 5);

value hxgl_uploadFromByteArrayVertex (value vboID, value data, 
                                      value byteArrayOffset, value startOffset, 
                                      value totalBytes)
{
    pf->glw->uploadFromByteArrayVertex (
        val_int (vboID),
        buffer_data(val_to_buffer (data)),
        val_int (byteArrayOffset),
        val_int (startOffset),
        val_int (totalBytes));
    return alloc_null ();
}
DEFINE_PRIM (hxgl_uploadFromByteArrayVertex, 5);

value hxgl_uploadFromByteArrayIndex (value iboID, value data, 
                                      value byteArrayOffset, value startOffset, 
                                      value totalBytes)
{
    pf->glw->uploadFromByteArrayVertex (
        val_int (iboID),
        buffer_data(val_to_buffer (data)),
        val_int (byteArrayOffset),
        val_int (startOffset),
        val_int (totalBytes));

    return alloc_null ();
}
DEFINE_PRIM (hxgl_uploadFromByteArrayIndex, 5);


//*************
//** SHADERS **
//*************

value hxgl_createProgram ()
{
    unsigned int pID = pf->glw->createProgram ();
    return alloc_int (pID);
}
DEFINE_PRIM (hxgl_createProgram, 0);

value hxgl_uploadProgram (value program, value vertexProgram, value fragmentProgram)
{
    pf->glw->uploadProgram (
        val_int (program),
        val_string (vertexProgram),
        val_string (fragmentProgram));

    return alloc_null ();
}
DEFINE_PRIM (hxgl_uploadProgram, 3);

value hxgl_setProgram (value program)
{
    pf->glw->setProgram (val_int (program));

    return alloc_null ();
}
DEFINE_PRIM (hxgl_setProgram, 1);

value hxgl_disposeProgram (value program)
{
    pf->glw->disposeProgram (val_int (program));

    return alloc_null ();
}
DEFINE_PRIM (hxgl_disposeProgram, 1);


extern "C" int hxgl_register_prims() { return 0; }








                     

