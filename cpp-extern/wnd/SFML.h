#ifndef WND_SFML_H
#define WND_SFML_H

#include "IWND.h"
#include "../InclGLib.h"
#include <iostream>
#include "../Log.h"
#include "../input/SFML.h"
#include "../input/Dummy.h"
#include "../input/IInput.h"

namespace hxgl
{
namespace window
{

    class SFML: public IWND
    {
    public:
        SFML();
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
	    sf::Window *wnd;
    };

}
}

#endif
