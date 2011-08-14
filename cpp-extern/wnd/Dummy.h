#ifndef WND_DUMMY_H
#define WND_DUMMY_H

#include "IWND.h"
#include "../input/Dummy.h"

namespace hxgl
{
namespace window
{

    class Dummy: public IWND
    {
    public:
        Dummy();
        ~Dummy();
	    void init ();
	    void terminate ();
	    bool create ();
	    void show (bool isVisible);
	    void resize (const int width, const int height);
	    void setTitle (const char *title);
	    void getGLVersion (unsigned int &major, unsigned int &minor);
	    void swapBuffers ();
	    bool process ();
	    hxgl::input::IInput *getInputHandle ();
	private:
	    hxgl::input::Dummy *_inp;
    };

}
}

#endif
