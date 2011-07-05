#ifndef GL11_H
#define GL11_H

#include "IGL_D.h"
#include <cstring> //So memcpy works on gcc 4.3
#include <iostream>

#ifdef ANDROID
    #include <GLES/gl.h>
    #include <GLES/glext.h>
#endif

#ifndef NULL
#define NULL 0
#endif

namespace GL11Data
{
	struct TypePointer	//for glVertexPointer/glTexCoord...etc
	{
		TypePointer()
		{
			size = 0;
			type = 0;
			stride = 0;
			pointer = NULL;
			active = false;
		}
		int size;
		int type;
		int stride;
		void *pointer;
		bool active;
	};
	struct VertexAttribData
	{
		VertexAttribData()
		{
		}
		TypePointer vertex;
		TypePointer index;
		TypePointer normal;
		TypePointer color;
		TypePointer texcoord;
		
	};
	struct VBO
	{
		VBO()
		{
			allocated = false;
			buffer = NULL;
			_hint = 0x00;
		}
		~VBO()
		{
			if (buffer != NULL)
			{
				 delete []buffer;
			}
		}
		bool allocated;
		char *buffer;
		unsigned int _hint;
	};
}

class GL11:public IGL_D
{
public:
	GL11();
	//Stage3D style
	void clear(const float &r, const float &g, const float &b, const float &a, const float &depth, unsigned int stencil, unsigned int mask);
	void configureBackBuffer(int width, int height, int antiAlias, bool enableDepthAndStencil);
	void setDepthTest(bool depthMask, int passCompareMode);
	void drawTriangles(int indexBuffer, int firstIndex, int numTriangles);
	void writePixels (int width, int height, void *data);
	
	
	void GenBuffer(unsigned int &id);
	void BindBuffer(int target, unsigned int buffer);
	void BufferData(int target, int size, const void *data, int usage);
	void DrawArrays(int mode, int first, int count);
	void DrawElementArray(int mode, int first, int count);
	void VertexAttribPointer(unsigned int index, int size, int type, bool normalized, int stride, unsigned int offset, int hint);
	void UniformMatrix4fv (int location, int count, bool transpose, float *data);

    void Viewport (int x, int y, int width, int height);
	
	void PixelStorei(int pname, int param);
	void GenTexture(unsigned int &id);
	void BindTexture(int target, unsigned int texture);
	void TexParameteri(int target, int pname, int param);
	void TexImage2D( int target, int level, int internalFormat, 
				   int width, int height, int border, 
				   int format, int type, void *data);
	void _ReadPixels (int x, int y, int width, int height, int format, int type, void *buffer);
	
	static const size_t _MAX_VBOS = 100;
	GL11Data::VBO _buffers[_MAX_VBOS];	//FIXME Make this dynamic allocation
	
	GL11Data::VertexAttribData _attribs;
	
	unsigned int _currentVBO;
	unsigned int _currentTex;	//FIXME HACK
};

#endif
