#ifndef GL_WRAPPER_IGL_H
#define GL_WRAPPER_IGL_H

namespace hxgl
{
namespace gw
{

    class IGL
    {
    public:

	    //Context3D Style binds
	    virtual void clear (float red, float green, float blue, float alpha, float depth, unsigned int stencil, unsigned int mask) = 0;
	    virtual void configureBackBuffer (int width, int height, int antiAlias, bool enableDepthAndStencil) = 0;
	    virtual void createCubeTexture (int size, const char *format, bool optimizeForRenderToTexture) = 0;
	    virtual unsigned int createVertexBuffer (unsigned int size) = 0;
	    virtual unsigned int createIndexBuffer (unsigned int size) = 0;
	    //virtual void dispose () = 0; DO NOT IMPLEMENT
	    //virtual void drawToBitmapData () = 0; DO NOT IMPLEMENT
	    virtual void drawTriangles(unsigned int iboID, int firstIndex, int numTriangles) = 0;
	    //virtual void present () = 0; DO NOT IMPLEMENT
	    virtual void setCulling(const char *triangleFaceToCull) = 0;
	    virtual void setDepthTest (bool depthMask, const char *passCompareMode) = 0;
	    virtual void setVertexBufferAt (int index, unsigned int vboID, int bufferOffset, const char *format, const char *hint) = 0;

	    //Shader stuff
	    virtual unsigned int createProgram() = 0;
	    virtual void uploadProgram (unsigned int program, const char *vertexProgram, const char *fragmentProgram) = 0;
	    virtual void setProgram (unsigned int program) = 0;	
	    virtual void disposeProgram (unsigned int program) = 0;

	    //Buffer3D Style binds
	    virtual void uploadFromByteArrayVertex(unsigned int vboID, const void *data, int byteArrayOffset, int startOffset, int totalBytes) = 0;
	    virtual void uploadFromByteArrayIndex(unsigned int iboID, const void *data, int byteArrayOffset, int startOffset, int totalBytes) = 0;	
    };

}
}
#endif
