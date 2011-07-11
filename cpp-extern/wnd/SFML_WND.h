#ifndef WND_SFML_WND_H
#define WND_SFML_WND_H

#include "IWND.h"
#include "../InclGLib.h"
#include <iostream>
#include "../Log.h"

namespace hxgl
{
namespace window
{

    class SFML_WND: public IWND
    {
    public:
	    void init ();
	    void terminate ();
	    bool create ();
	    void show (bool isVisible);
	    void resize ();
	    void setTitle (const char *title);
	    void getGLVersion (unsigned int &major, unsigned int &minor);
	    void swapBuffers ();
	    bool process ();
	    input::IInput *getInputHandle ();

    private:
	    sf::Window *wnd;
    };

}
}

#endif
