//CURRENTLY BROKEN

#include "GL11.h"
#include "../Log.h"

GL11::GL11 ()
{
}

//Stage3D style
//Should this function be separated?
void GL11::clear(const float &r, const float &g, const float &b, const float &a, 
		const float &depth, unsigned int stencil, unsigned int mask)
{
	//FIXME Add stencil buffer support.
	glClearColor (r,g,b,a);
	#ifdef ANDROID
        glClearDepthf(depth);
	#else
        glClearDepth(depth);
	#endif
	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
}

void GL11::configureBackBuffer(int width, int height, int antiAlias, bool enableDepthAndStencil)
{
	//TODO implement configureBackBuffer
	glViewport (0,0,width, height);
}

void GL11::setDepthTest(bool depthMask, int passCompareMode)
{
	//TODO implement setDepthTest
}

void GL11::drawTriangles(int indexBuffer, int firstIndex, int numTriangles)
{
	
	//glDrawElementArray(mode, first, count)
}

void GL11::GenBuffer(unsigned int &id)
{
	//Always start at 1
	for (int i=1;i<_MAX_VBOS;i++)
	{
		if (false == _buffers[i].allocated)
		{
			_buffers[i].allocated = true;
			id = i;
			return;
		}
	}
	HXGL_ERROR ("GL11::GenBuffer(): Reached maximum number of VBO's");
}
void GL11::BindBuffer(int target, unsigned int buffer)
{	
	if (buffer > _MAX_VBOS) HXGL_ERROR ("GL11::BindBuffer(): Out of range");
	
	_currentVBO = buffer;
	
	if (target == GL_ELEMENT_ARRAY_BUFFER)
	{
		char *tbuf = (char *)_buffers[_currentVBO].buffer;
		_attribs.index.pointer = tbuf;
	}
}
void GL11::BufferData(int target, int size, const void *data, int usage)
{
	//std::cout << "Uploading to buffer: " << _currentVBO << std::endl;
	if (0 == _currentVBO){
		HXGL_ERROR ("GL11::BufferData(): INVALID_OPERATION");
	}
	
	void *buffer = _buffers[_currentVBO].buffer;
	if (NULL != _buffers[_currentVBO].buffer){
		delete []_buffers[_currentVBO].buffer;
	}
	_buffers[_currentVBO].buffer = new char [size];
	//std::cout << "bufdata" << _buffers[_currentVBO].buffer << ":" << size << std::endl;
	memcpy (_buffers[_currentVBO].buffer, data, size);
}
void GL11::DrawArrays(int mode, int first, int count)
{	
	if (!_attribs.vertex.active)
	{
		HXGL_ERROR ("DrawArrays on inactive vertexBuffer");
	}
	if (0 == _attribs.vertex.pointer) HXGL_ERROR ("DrawArrays on buffer[0]");
	if (NULL == _attribs.vertex.pointer) HXGL_ERROR ("DrawArrays on null buffer");
	glVertexPointer(3, GL_FLOAT, 0, _attribs.vertex.pointer);
	
	//std::cout << "Vertex pointer" << std::endl;
	glEnableClientState(GL_VERTEX_ARRAY);
	
	glColor4f(1,0,0,1);
	glDrawArrays(mode, first, count);
	
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);
	glDisableClientState(GL_VERTEX_ARRAY);	
}
void GL11::DrawElementArray(int mode, int count, int type)
{
	//TODO make this work off of hints and _attribs (hxgl_vertexAttribPointer)
	
	if (NULL == _attribs.index.pointer) HXGL_ERROR ("DrawElements on null index");
	
	if (NULL == _attribs.vertex.pointer) 
	{
		HXGL_ERROR ("DrawElements with no position data, cannot render");
		return;
	}
	
	if (_attribs.vertex.pointer != NULL)
	{
	    glEnableClientState(GL_VERTEX_ARRAY);
		glVertexPointer(_attribs.vertex.size, _attribs.vertex.type, _attribs.texcoord.stride, _attribs.vertex.pointer);
	}
	
	if (_attribs.normal.pointer != NULL)
	{
		//TODO Verify
		glNormalPointer(_attribs.normal.type, _attribs.texcoord.stride, _attribs.normal.pointer);
		glEnableClientState (GL_NORMAL_ARRAY);
	}
	
	if (_attribs.color.pointer != NULL)
	{
		glColorPointer(_attribs.color.size, _attribs.color.type, _attribs.texcoord.stride, _attribs.color.pointer);
		glEnableClientState (GL_COLOR_ARRAY);
	}
	
	if (_attribs.texcoord.pointer != NULL)
	{
		glShadeModel (GL_FLAT);
		glEnable (GL_TEXTURE_2D);
		glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
		glTexCoordPointer(_attribs.texcoord.size, _attribs.texcoord.type, _attribs.texcoord.stride, _attribs.texcoord.pointer);
		glEnableClientState (GL_TEXTURE_COORD_ARRAY);
	}
	
	glDrawElements(mode, count, type, _attribs.index.pointer);
	
	glDisableClientState(GL_COLOR_ARRAY);
	glDisableClientState(GL_NORMAL_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);
	glDisableClientState(GL_VERTEX_ARRAY);

	glDisable (GL_TEXTURE_2D);
}


void GL11::VertexAttribPointer(unsigned int index, int size, int type, bool normalized, int stride, unsigned int offset, int hint)
{
	GL11Data::TypePointer *tp;
	switch (hint)
	{
		case 0x01:
			tp = &_attribs.vertex;
			break;
		case 0x02:
			tp = &_attribs.normal;
			break;
		case 0x03:
			tp = &_attribs.color;
			break;
		case 0x04:
			tp = &_attribs.texcoord;
			break;
		default:
			HXGL_ERROR ("Unsupported setVertexIndex");
	}
	
	if (0 == _currentVBO) HXGL_ERROR ("setVertexBufferAt called on 0 buffer");
	if (NULL == _buffers[_currentVBO].buffer) HXGL_ERROR ("setVertexBufferAt called on null buffer");
	
	if (NULL != tp)
	{
		char *tbuf = (char *)_buffers[_currentVBO].buffer;
		tbuf += offset;
		tp->pointer = tbuf;
		tp->type = type;
		tp->size = size;
		tp->stride = stride;
		//tp->active = true;
	}
}

void GL11::UniformMatrix4fv (int location, int count, bool transpose, float *data)
{
	//FIXME just some crazy messed up code for debugging
	glLoadIdentity();
    glScalef(1,-1,1);       //FIXME Hack for NME readback to be the proper orientation.
	glMultMatrixf (data);
	
}


void GL11::Viewport (int x, int y, int width, int height)
{
    glViewport (x,y,width,height);
}

//@@@TEXTURES
void GL11::PixelStorei(int pname, int param)
{
	glPixelStorei (pname, param);
}

void GL11::GenTexture(unsigned int &id)
{
	glGenTextures (1, &id);
	_currentTex = id;
}

void GL11::BindTexture(int target, unsigned int texture)
{
	glBindTexture (target,texture);
}

void GL11::TexParameteri(int target, int pname, int param)
{
	glTexParameteri (target,pname,param);
}

void GL11::TexImage2D( int target, int level, int internalFormat, 
		           int width, int height, int border, 
		  	   int format, int type, void *data)
{
	glTexImage2D (target,level,internalFormat,width,height,border,format,type,data);
}


void GL11::_ReadPixels (int x, int y, int width, int height, int format, int type, void *buffer)
{	
	glReadPixels(x,y,width,height,format,type,buffer);
}

void GL11::writePixels (int width, int height, void *data)
{
    HXGL_ERROR ("GL11::writePixels is not yet supported");

    if (NULL == data) HXGL_ERROR ("Pixel write on null data");
	
    //glDrawPixels (width, height, GL_RGBA, GL_UNSIGNED_BYTE, data);
}
	
