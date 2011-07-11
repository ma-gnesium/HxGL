#include "Dummy.h"

#ifndef NULL
#define NULL 0
#endif

namespace hxgl
{
namespace window
{ 
    Dummy::Dummy ()
    {
        _inp = new hxgl::input::Dummy;
    }

    Dummy::~Dummy ()
    {
        delete _inp;
    }


    void Dummy::init ()
    {
    }

    void Dummy::terminate ()
    {
     
    }

    //FIXME SUPPORT MULTIPLE WINDOWS
    //FIXME Support specified window size
    bool Dummy::create()
    {
        return true;	//FIXME check if window creation was successful
    }

    void Dummy::show (bool isVisible)
    {
    }

    void Dummy::resize()
    {
    }

    void Dummy::setTitle (const char *title)
    {
    }

    void Dummy::getGLVersion (unsigned int &major, unsigned int &minor)
    {

    }

    void Dummy::swapBuffers ()
    {
    }

    bool Dummy::process ()
    {
        return true;
    }

    //FIXME make input an single instance per window.
    //FIXME fix memory leak
    input::IInput *Dummy::getInputHandle ()
    {
        return _inp;
    }

}
}

