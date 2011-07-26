#ifndef GLES20_H
#define GLES20_H

#include "IGL.h"
#include <cstring> //So memcpy works on gcc 4.3
#include <iostream>
#include "../Log.h"

#ifdef ANDROID
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#elif defined IPHONE
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
#else
    #include "../InclGLib.h"
#endif

#ifndef NULL
#define NULL 0
#endif

namespace hxgl
{
namespace gw
{

    class GLES20:public IGL
    {
    public:
        //Context3D Style binds
	    void clear (float red, float green, float blue, float alpha, float depth, unsigned int stencil, unsigned int mask);
	    void configureBackBuffer (int width, int height, int antiAlias, bool enableDepthAndStencil);
	    void createCubeTexture (int size, const char *format, bool optimizeForRenderToTexture);
	    unsigned int createVertexBuffer (unsigned int size);
	    unsigned int createIndexBuffer (unsigned int size);
	
	    //void drawToBitmapData (); DO NOT IMPLEMENT
	    void drawTriangles(unsigned int iboID, int firstIndex, int numTriangles);
	    //void present (); DO NOT IMPLEMENT
	    void setCulling(const char *triangleFaceToCull);
	    void setDepthTest (bool depthMask, const char *passCompareMode);
	    void setVertexBufferAt (const char *loc, unsigned int vboID, int bufferOffset, int stride, const char *format);

        //Shader stuff
	    unsigned int createProgram();
	    void uploadProgram (unsigned int program, const char *vertexProgram, const char *fragmentProgram);
	    void setProgram (unsigned int program);	
	    void disposeProgram (unsigned int program);
	    //void disposeContext (); DO NOT IMPLEMENT
	    //void disposeVertexBuffer (); DO NOT IMPLEMENT
	    //void disposeIndexBuffer (); DO NOT IMPLEMENT

	    //Buffer3D Style binds
        void uploadFromByteArrayVertex(unsigned int vboID, const void *data, int byteArrayOffset, int startOffset, int totalBytes);
	    void uploadFromByteArrayIndex(unsigned int iboID, const void *data, int byteArrayOffset, int startOffset, int totalBytes);	

        //Textures
        unsigned int createTexture (unsigned int width, unsigned int height, const char *format, bool optimizeForRenderToTexture);
        void uploadFromByteArrayTexture (unsigned int tID, void *data, unsigned int byteArrayOffset, unsigned int width, unsigned int height);
		void setTextureAt (const char *location, unsigned int sampler, unsigned int tID);
		
		//Matrix
		void setMatrixAt (const char *location, int count, bool transpose, void *data);
		
		//Dispose
		void disposeTexture (unsigned int tID);
		void disposeBuffer (unsigned int boID);
		
    private:
		GLuint current_program;
        void deleteProgram (unsigned int program);
        void allocateProgram (unsigned int program, unsigned int vs, unsigned int fs);
    };

}
}
#endif
