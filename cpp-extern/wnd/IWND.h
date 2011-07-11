#ifndef WND_IWND_H
#define WND_IWND_H

#include "../input/IInput.h"

namespace hxgl
{
namespace window
{

    class IWND
    {
    public:
	    virtual void init () = 0;		
	    virtual void terminate () = 0; //STUB
	    virtual bool create () = 0;
	    virtual void show (bool isVisible) = 0;
	    virtual void resize () = 0;  //STUB
	    virtual void setTitle (const char * title) = 0; //STUB
	    virtual void getGLVersion (unsigned int &major, unsigned int &minor) = 0; //STUB
	    virtual void swapBuffers() = 0; 
	    virtual bool process() = 0;
	    virtual hxgl::input::IInput *getInputHandle () = 0;
    protected:
        hxgl::input::IInput *input;
    };

}
}

#endif
