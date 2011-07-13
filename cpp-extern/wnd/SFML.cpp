#include "SFML.h"

namespace hxgl
{
namespace window
{
    SFML::SFML()
    {
        input = NULL;
    }
    void SFML::init ()
    {
    }

    void SFML::terminate ()
    {
     
    }

    //FIXME SUPPORT MULTIPLE WINDOWS
    //FIXME Support specified window size
    bool SFML::create()
    {
        //FIXME fix memory leak
        sf::WindowSettings s;		
        s.DepthBits = 24;
        s.StencilBits = 8;
        s.AntialiasingLevel = 8;
        wnd = new sf::Window(sf::VideoMode(512,512,32), "Application", sf::Style::Close, s);

        if (NULL == wnd) return false;

        wnd->SetActive ();

        return true;	//FIXME check if window creation was successful
    }

    void SFML::show (bool isVisible)
    {
	    wnd->Show (isVisible);
    }

    void SFML::resize()
    {
    }

    void SFML::setTitle (const char *title)
    {
    }

    //NOTE obsolete
    void SFML::getGLVersion (unsigned int &major, unsigned int &minor)
    {

    }

    void SFML::swapBuffers ()
    {
        wnd->Display();
    }

    bool SFML::process ()
    {
        sf::Event evt;
        while (wnd->GetEvent (evt)) 
        {
	        if (sf::Event::Closed == evt.Type) 
	        {
		        return false;
	        }
        }	//Don't block input
        return true;
    }

    //FIXME make input an single instance per window.
    //FIXME fix memory leak
    hxgl::input::IInput *SFML::getInputHandle ()
    {
        if(NULL != input) delete input;
        if(NULL == wnd) HXGL_FATAL_ERROR ("SFML::wnd is null, cannot get input handle");
        input = new hxgl::input::SFML(wnd);
	    return input;
    }

}
}
