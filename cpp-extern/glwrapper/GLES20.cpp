#include "GLES20.h"

#define BUFFER_OFFSET(i) ((char *)NULL + (i))

namespace hxgl
{
namespace gw
{

    //Context3D Style binds
    void GLES20::clear (float red, float green, float blue, float alpha, float depth, unsigned int stencil, unsigned int mask)
    {
        glClearColor (red,green,blue,alpha);
        #ifdef ANDROID
        glClearDepthf (depth);
        #else
        glClearDepth (depth);
        #endif
        //TODO implement stencil and mask clear values

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
    }
    void GLES20::configureBackBuffer (int width, int height, int antiAlias, bool enableDepthAndStencil)
    {
        //Implement backbuffer size calls into Android
        //Ditto for antiAlias
        //Ditto for enableDepthAndStencil    
    }

    void GLES20::createCubeTexture (int size, const char *format, bool optimizeForRenderToTexture)
    {
        HXGL_ERROR ("GLES20::createCubeTexture is not implemented");
    }
    unsigned int GLES20::createVertexBuffer (unsigned int size)
    {
        unsigned int vboID;
        glGenBuffers(1,&vboID);
        glBindBuffer (GL_ARRAY_BUFFER, vboID);
        glBufferData (GL_ARRAY_BUFFER, size, NULL, GL_STATIC_DRAW);
        glBindBuffer (GL_ARRAY_BUFFER, 0);
        return vboID;
    }
    unsigned int GLES20::createIndexBuffer (unsigned int size)
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
    void GLES20::drawTriangles(unsigned int iboID, int firstIndex, int numTriangles)
    {
        glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, iboID);

        glDrawElements (GL_TRIANGLES, numTriangles * 3, GL_UNSIGNED_SHORT, BUFFER_OFFSET (firstIndex * 2));
        
        glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, 0);
    }
    //virtual void present (); DO NOT IMPLEMENT
    void GLES20::setCulling(const char *triangleFaceToCull)
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
			 glEnable(GL_CULL_FACE);
            glCullFace(GL_FRONT);
        }
        else if (strcmp(triangleFaceToCull,"frontAndBack") == 0) 
        {
			glEnable(GL_CULL_FACE);
            glCullFace(GL_FRONT_AND_BACK);
        }
        else HXGL_ERROR ("GLES20::setDepthTest(): Invalid triangleFaceToCull");
    }
    void GLES20::setDepthTest (bool depthMask, const char *passCompareMode)
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
        else HXGL_ERROR ("GLES20::setDepthTest(): Invalid passCompareMode");
    }
    void GLES20::setVertexBufferAt (const char *loc, unsigned int vboID, int bufferOffset, int stride, const char *format)
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


        if (0 == vboID)
        {
			GLint li = glGetAttribLocation (current_program, loc);
			if (NULL == li) HXGL_ERROR ("setVertexBufferAt (): No such attribute");
            glDisableVertexAttribArray (li);
        }
        else
        {
            glBindBuffer (GL_ARRAY_BUFFER, vboID);
            GLint li = glGetAttribLocation (current_program, loc);
			if (-1 == li){
				HXGL_ERROR ("setVertexBufferAt (): No such attribute");
				HXGL_ERROR ("loc");
			}
			
			glVertexAttribPointer (li, size, type, false, stride, BUFFER_OFFSET (bufferOffset));  //FIXME add stride support
            glEnableVertexAttribArray (li);
            glBindBuffer (GL_ARRAY_BUFFER, 0);
        }
    }

    unsigned int GLES20::createProgram()
    {
        unsigned int pid = glCreateProgram ();
        allocateProgram (pid,0,0);
        return pid;
    }

    void validateShader (GLuint shader)
    {
        const unsigned int BUFFER_SIZE = 512;
        char buffer[BUFFER_SIZE];
        memset (buffer, 0, BUFFER_SIZE);
        GLsizei length = 0;

        glGetShaderInfoLog(shader, BUFFER_SIZE, &length, buffer);
        if (length > 0)
        {
            std::cout << "Shader validation failed:\n" << buffer << std::endl;
        }
    }

    //Program3D.upload ();
    void GLES20::uploadProgram (unsigned int program, const char *vertexProgram, const char *fragmentProgram)
    {
        GLuint vs = glCreateShader (GL_VERTEX_SHADER);
        GLuint fs = glCreateShader (GL_FRAGMENT_SHADER);
        
        allocateProgram (program,vs,fs);

        if (NULL == vertexProgram) HXGL_ERROR ("Vertex shader was null");
        if (NULL == fragmentProgram) HXGL_ERROR ("Vertex shader was null");

        //TODO add shader validation and error log
        glShaderSource (vs, 1, &vertexProgram, 0);
        glCompileShader (vs);
        
        glShaderSource (fs, 1, &fragmentProgram, 0);
        glCompileShader (fs);

        validateShader(vs);
        validateShader(fs);

        glAttachShader (program, vs);
        glAttachShader (program, fs);

        glLinkProgram (program);        //FIXME Attributes are currently bound automatically
        glValidateProgram (program);
        GLint result;
        glGetProgramiv(program, GL_VALIDATE_STATUS, &result);
        if (GL_FALSE == result) HXGL_ERROR ("Program failed validation");
    }
    void GLES20::setProgram (unsigned int program)
    {
		current_program = program;
        glUseProgram (program);
    }

    void GLES20::disposeProgram (unsigned int program)
    {
        deleteProgram (program);
    }

    //Buffer3D Style binds
    void GLES20::uploadFromByteArrayVertex(unsigned int vboID, const void *data, int byteArrayOffset, int startOffset, int totalBytes)
    {
        glBindBuffer (GL_ARRAY_BUFFER, vboID);
        glBufferSubData (GL_ARRAY_BUFFER, startOffset, totalBytes, ((char *)data+byteArrayOffset));
        glBindBuffer (GL_ARRAY_BUFFER, 0);
    }

    void GLES20::uploadFromByteArrayIndex(unsigned int iboID, const void *data, int byteArrayOffset, int startOffset, int totalBytes)
    {
        glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, iboID);
        glBufferSubData (GL_ELEMENT_ARRAY_BUFFER, startOffset, totalBytes, ((char *)data+byteArrayOffset));
        glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, 0);
    }

    unsigned int GLES20::createTexture (unsigned int width, unsigned int height, const char *format, bool optimizeForRenderToTexture)
    {
        unsigned int tID;
        glGenTextures (1, &tID);
		
		glBindTexture (GL_TEXTURE_2D, tID); 
		glPixelStorei (GL_UNPACK_ALIGNMENT, 1);
		glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
		glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
		glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
				
        glTexImage2D (GL_TEXTURE_2D, 0, 4, width, height, 0, GL_BGRA, GL_UNSIGNED_BYTE, NULL);
        
        glBindTexture (GL_TEXTURE_2D, 0);

        return tID;
    }

    void GLES20::uploadFromByteArrayTexture (unsigned int tID, void *data, unsigned int byteArrayOffset, unsigned int width, unsigned int height)
    {
        glBindTexture (GL_TEXTURE_2D, tID); 
				
        glTexSubImage2D (GL_TEXTURE_2D, 0, 0, 0, width, height, GL_BGRA, GL_UNSIGNED_BYTE, (char *)data+byteArrayOffset);
        		
		glBindTexture (GL_TEXTURE_2D, 0);
    }
	
	void GLES20::setTextureAt (const char *location, unsigned int sampler, unsigned int tID)
	{		
		if (0 == tID)
		{
			glBindTexture (GL_TEXTURE_2D, 0);
		}
		else
		{
			GLint loc = glGetUniformLocation (current_program,location);
			if (-1 == loc) HXGL_ERROR ("Location does not exist");
			glEnable (GL_TEXTURE_2D);
			glActiveTexture (GL_TEXTURE0 + sampler);	//TODO Add check for TMU oob
			glBindTexture (GL_TEXTURE_2D, tID);
			glUniform1i(loc, sampler);
		}
	}
	
	//Matrix
	void GLES20::setMatrixAt (const char *location, int count, bool transpose, void *data)
	{
		GLint loc = glGetUniformLocation (current_program,location);
		if (-1 == loc) HXGL_ERROR ("Location does not exist");
		glUniformMatrix4fv (loc, count, transpose, (GLfloat *)data);		
	}
	
	void GLES20::disposeTexture (unsigned int tID)
	{
		glDeleteTextures (1, &tID);
	}
	
	void GLES20::disposeBuffer (unsigned int boID)
	{
		glDeleteBuffers (1, &boID);
	}
	
    //***************************
    //**********  END  **********
    //***************************
	
    //Used for disposeProgram
    void GLES20::deleteProgram (unsigned int program)
    {
        //TODO implement
    }
    void GLES20::allocateProgram (unsigned int program, unsigned int vs, unsigned int fs)
    {
        //TODO implement
    }
}
}
