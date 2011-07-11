#include "GLES11.h"
#include "../Log.h"

#ifdef ANDROID
#include <GLES/gl.h>
#include <GLES/glext.h>
#elif defined IPHONE
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>
#else
#include <GL/glew.h>
#endif

#define BUFFER_OFFSET(i) ((char *)NULL + (i))

namespace hxgl
{
namespace gw
{
    //Context3D Style binds
    void GLES11::clear (float red, float green, float blue, float alpha, float depth, unsigned int stencil, unsigned int mask)
    {
        glClearColor (red,green,blue,alpha);
        glClearDepthf (depth);
        //TODO implement stencil and mask clear values

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
    }
    void GLES11::configureBackBuffer (int width, int height, int antiAlias, bool enableDepthAndStencil)
    {
        //Implement backbuffer size calls into Android
        //Ditto for antiAlias
        //Ditto for enableDepthAndStencil    
    }

    void GLES11::createCubeTexture (int size, const char *format, bool optimizeForRenderToTexture)
    {
        HXGL_ERROR ("GLES11::createCubeTexture is not implemented");
    }
    unsigned int GLES11::createVertexBuffer (unsigned int size)
    {
        unsigned int vboID;
        glGenBuffers(1,&vboID);
        glBindBuffer (GL_ARRAY_BUFFER, vboID);
        glBufferData (GL_ARRAY_BUFFER, size, NULL, GL_STATIC_DRAW);
        glBindBuffer (GL_ARRAY_BUFFER, 0);
        return vboID;
    }
    unsigned int GLES11::createIndexBuffer (unsigned int size)
    {
        unsigned int iboID;
        glGenBuffers(1,&iboID);
        glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, iboID);
        glBufferData (GL_ELEMENT_ARRAY_BUFFER, size, NULL, GL_STATIC_DRAW);
        glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, 0);
        return iboID;
    }
    //virtual void dispose (); DO NOT IMPLEMENT
    //virtual void drawToBitmapData (); DO NOT IMPLEMENT
    void GLES11::drawTriangles(unsigned int iboID, int firstIndex, int numTriangles)
    {
        glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, iboID);

        glDrawElements (GL_TRIANGLES, numTriangles * 3, GL_UNSIGNED_SHORT, BUFFER_OFFSET (firstIndex * 2));
        
        glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, 0);
    }
    //virtual void present (); DO NOT IMPLEMENT
    void GLES11::setCulling(const char *triangleFaceToCull)
    {
        if (strcmp(triangleFaceToCull,"none") == 0)
        {
            glDisable(GL_CULL_FACE);
        }
        else if (strcmp(triangleFaceToCull,"back") == 0) 
        {
            glEnable(GL_CULL_FACE);
            glCullFace(GL_BACK);
        }
        else if (strcmp(triangleFaceToCull,"front") == 0) 
        {
            glCullFace(GL_FRONT);
        }
        else if (strcmp(triangleFaceToCull,"frontAndBack") == 0) 
        {
            glCullFace(GL_FRONT_AND_BACK);
        }
        else HXGL_ERROR ("GLES11::setDepthTest(): Invalid triangleFaceToCull");
    }
    void GLES11::setDepthTest (bool depthMask, const char *passCompareMode)
    {
        glDepthMask (depthMask);

        if (strcmp(passCompareMode,"always") == 0)
        {
            glDepthFunc(GL_ALWAYS);
        }
        else if (strcmp(passCompareMode,"equal") == 0) 
        {
            glDepthFunc(GL_EQUAL);
        }
        else if (strcmp(passCompareMode,"greater") == 0) 
        {
            glDepthFunc(GL_GREATER);
        }
        else if (strcmp(passCompareMode,"greaterEqual") == 0) 
        {
            glDepthFunc(GL_GEQUAL);
        }
        else if (strcmp(passCompareMode,"less") == 0) 
        {
            glDepthFunc(GL_LESS);
        }
        else if (strcmp(passCompareMode,"lessEqual") == 0) 
        {
            glDepthFunc(GL_LEQUAL);
        }
        else if (strcmp(passCompareMode,"never") == 0) 
        {
            glDepthFunc(GL_NEVER);
        }
        else if (strcmp(passCompareMode,"notEqual") == 0) 
        {
            glDepthFunc(GL_NOTEQUAL);
        }
        else HXGL_ERROR ("GLES11::setDepthTest(): Invalid passCompareMode");
    }
    void GLES11::setVertexBufferAt (int index, unsigned int vboID, int bufferOffset, const char *format, const char *hint)
    {
        GLenum type = GL_FLOAT;
        GLint size = 3;
        if (strcmp(format,"bytes4") == 0) 
        {
            type = GL_UNSIGNED_BYTE;
            size = 4;
        }
        else if (strcmp(format,"float1") == 0) 
        {
            size = 1;
        }
        else if (strcmp(format,"float2") == 0) 
        {
            size = 2;    
        }
        else if (strcmp(format,"float3") == 0) 
        {
            size = 3;
        }
        else if (strcmp(format,"float4") == 0) 
        {
            size = 4;
        }

        if (strcmp(hint,"position") == 0)
        {
            if (vboID == 0)
            {
                glDisableClientState (GL_VERTEX_ARRAY);
            }
            else
            {
                glEnableClientState (GL_VERTEX_ARRAY);
                glBindBuffer(GL_ARRAY_BUFFER, vboID);
                glVertexPointer (size, type, bufferOffset, BUFFER_OFFSET(bufferOffset));
                glBindBuffer(GL_ARRAY_BUFFER, 0);
            }
        }
        else if (strcmp(hint,"color") == 0)
        {
            if (vboID == 0)
            {
                glDisableClientState (GL_COLOR_ARRAY);
            }
            else
            {
                glEnableClientState (GL_COLOR_ARRAY);
                glBindBuffer(GL_ARRAY_BUFFER, vboID);
                glColorPointer (size, type, bufferOffset, BUFFER_OFFSET(bufferOffset));
                glBindBuffer(GL_ARRAY_BUFFER, 0);
            }
        }
        else HXGL_ERROR ("GLES11::setVertexBufferAt(): Hint is not supported");

    }

    //Buffer3D Style binds
    void GLES11::uploadFromByteArrayVertex(unsigned int vboID, const void *data, int byteArrayOffset, int startOffset, int totalBytes)
    {
        glBindBuffer (GL_ARRAY_BUFFER, vboID);
        glBufferSubData (GL_ARRAY_BUFFER, startOffset, totalBytes, ((char *)data+byteArrayOffset));
        glBindBuffer (GL_ARRAY_BUFFER, 0);
    }

    void GLES11::uploadFromByteArrayIndex(unsigned int iboID, const void *data, int byteArrayOffset, int startOffset, int totalBytes)
    {
        glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, iboID);
        glBufferSubData (GL_ELEMENT_ARRAY_BUFFER, startOffset, totalBytes, ((char *)data+byteArrayOffset));
        glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, 0);
    }

}
}
