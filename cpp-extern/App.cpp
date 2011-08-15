/*
    If you edit App.cpp make sure to update the binding in GL.hx too!
*/

#define HXGL_VERIFY_GW          //Ensure that pf and glw are in place on each external call

#ifndef IPHONE
    #define IMPLEMENT_API
#endif

#include "App.h"
#include "InclGLib.h"


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

    pf->input = pf->wnd->getInputHandle ();

    #if !(defined IPHONE || defined ANDROID)
        GLenum err = glewInit ();
        if (GLEW_OK != err)
        {
            HXGL_FATAL_ERROR ("GLEW failed to init");
        }
        HXGL_NOTIFY ("GLEW OK!");
    #endif

    #if !(defined IPHONE || defined ANDROID) //BUG glGetString crashes on android emulator
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
    
    if (NULL == pf->glw) HXGL_FATAL_ERROR ("hxgl_init(): glw is null");    
    if (NULL == pf->input) HXGL_FATAL_ERROR ("hxgl_init(): inp is null");    

	glEnable (GL_DEPTH_TEST);

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
        
    pf->wnd->resize (
        val_int (width),
        val_int (height));

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

value hxgl_setVertexBufferAt (value loc, value vboID, value bufferOffset, 
                                    value stride, value format)
{
    pf->glw->setVertexBufferAt (
        val_string (loc),
        val_int (vboID),
        val_int (bufferOffset),
		val_int (stride),
        val_string (format));
        
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

//Please note, this is passed in as double, and must
//be reprocessed to float. sigh.
//IMPORTANT numEntries is number of floats, NOT number of vertexes
value hxgl_uploadFromVectorVertex (value vboID, value data, 
                                   value startOffset, 
                                   value numEntries)
{
    int l = val_int (numEntries);
    int ost = val_int (startOffset);
    int al = val_array_size (data);

    if (l+ost <= al ) 
    {
        double *_data = val_array_double (data);
        float *_fdata = new float [l]; //We only want what is useful
        float *_fptr = _fdata;
        for (int i=0;i<l;i++)
        {
            *(_fptr++) = (float)*(_data++);
        }
        /*
        for (int i=0;i<l;i++)
        {
            _fdata[i] = (float)_data[i+ost];
        }
        */

        pf->glw->uploadFromByteArrayVertex (
            val_int (vboID),
            _fdata,
            0,
            0,
            l*4);
        
        delete []_fdata;
    }else HXGL_ERROR ("uploadFromVectorVertex sizing error");
    
    return alloc_null();
}
DEFINE_PRIM (hxgl_uploadFromVectorVertex, 4);

//Please note, this is passed in as double, and must
//be reprocessed to float. sigh.
//IMPORTANT numEntries is number of floats, NOT number of vertexes
value hxgl_uploadFromVectorIndex (value iboID, value data, 
                                  value startOffset, 
                                  value numEntries)
{
    int l = val_int (numEntries);
    int ost = val_int (startOffset);
    int al = val_array_size (data);

    if (l+ost <= al ) 
    {
        int *_data = val_array_int (data);
        unsigned short *_idata = new unsigned short [l]; //We only want what is useful
        unsigned short *_iptr = _idata;
        for (int i=0;i<l;i++)
        {
            *(_iptr++) = (unsigned short)*(_data++);
        }

        pf->glw->uploadFromByteArrayIndex (
            val_int (iboID),
            _idata,
            0,
            0,
            l*2);
        
        delete []_idata;
    }else HXGL_ERROR ("uploadFromVectorVertex sizing error");
    
    return alloc_null();
}
DEFINE_PRIM (hxgl_uploadFromVectorIndex, 4);

value hxgl_uploadFromByteArrayIndex (value iboID, value data, 
                                      value byteArrayOffset, value startOffset, 
                                      value totalBytes)
{
    pf->glw->uploadFromByteArrayIndex (
        val_int (iboID),
        buffer_data(val_to_buffer (data)),
        val_int (byteArrayOffset),
        val_int (startOffset),
        val_int (totalBytes));

    return alloc_null ();
}
DEFINE_PRIM (hxgl_uploadFromByteArrayIndex, 5);


value hxgl_createTexture (value width, value height, value format,
                          value optimizeForRenderToTexture)
{
    unsigned int tID = pf->glw->createTexture (
                            val_int (width),
                            val_int (height),
                            val_string (format),
                            val_bool (optimizeForRenderToTexture));

    return alloc_int (tID);
}
DEFINE_PRIM (hxgl_createTexture, 4);

value hxgl_uploadFromByteArrayTexture (value tID, value data, value byteArrayOffset,
                                       value width, value height)
{
    pf->glw->uploadFromByteArrayTexture (
                        val_int (tID),
                        buffer_data(val_to_buffer (data)),
                        val_int (byteArrayOffset),
                        val_int (width),
                        val_int (height));
    return alloc_null ();
}
DEFINE_PRIM (hxgl_uploadFromByteArrayTexture, 5);

value hxgl_setTextureAt (value location, value sampler, value tID)
{
	pf->glw->setTextureAt (val_string(location), val_int (sampler), val_int (tID));
	return alloc_null();
}
DEFINE_PRIM (hxgl_setTextureAt,3);

value hxgl_setMatrixAt (value location, value count, value transpose, value data)
{
	int al = val_array_size (data);
    double *_data = val_array_double (data);
	
	if (al != 16) HXGL_ERROR ("hxgl.ndll:setMatrixAt () Invalid matrix size");
	
	float *_fdata = new float [16];
	for (int i=0;i<16;i++)
	{
		_fdata[i] = (float)_data[i];
	}
	
	pf->glw->setMatrixAt (val_string (location), 
						  val_int (count), 
						  val_bool (transpose), 
						  _fdata);

	delete []_fdata;
	return alloc_null ();
}
DEFINE_PRIM (hxgl_setMatrixAt, 4);

value hxgl_disposeTexture (value tID)
{
	pf->glw->disposeTexture (val_int (tID));
	return alloc_null ();
}
DEFINE_PRIM (hxgl_disposeTexture, 1);

value hxgl_disposeBuffer (value boID)
{
	pf->glw->disposeBuffer (val_int (boID));
	return alloc_null ();
}
DEFINE_PRIM (hxgl_disposeBuffer, 1);

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


//*************
//**  INPUT  **
//*************

value hxgl_getDigital (value id)
{
    unsigned int status = pf->input->getDigital (val_int(id));
    
    return alloc_int (status);
}
DEFINE_PRIM (hxgl_getDigital,1);

value hxgl_getToggle (value id)
{
    bool status = pf->input->getToggle (val_int(id));
    
    return alloc_bool (status);
}
DEFINE_PRIM (hxgl_getToggle,1);

extern "C" int hxgl_register_prims() { return 0; }








                     

