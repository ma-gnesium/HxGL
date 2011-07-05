/**
 * ...
 * @author Matthew Spencer
 */

 #include "SFML_WND.h"
 #include <iostream>
 #include "../Log.h"

 //FIXME ADD CONSTRUCTOR/DESTRUCTOR
 void SFML_WND::init ()
 {
 }
 
 void SFML_WND::terminate ()
 {
	 
 }
 
//FIXME SUPPORT MULTIPLE WINDOWS
//FIXME Support specified window size
 bool SFML_WND::create()
 {
    //FIXME fix memory leak
    sf::WindowSettings s;		
    s.DepthBits = 24;
    s.StencilBits = 8;
    s.AntialiasingLevel = 8;        //FIXME Causes crashes on some versions of linux.
    wnd = new sf::Window(sf::VideoMode(512,512,32), "Application", sf::Style::Close, s);

    if (NULL == wnd) return false;

    wnd->SetActive ();

    return true;	//FIXME check if window creation was successful
 }

 void SFML_WND::show (bool isVisible)
 {
    	wnd->Show (isVisible);
 }
 
 void SFML_WND::resize()
 {
 }
 
 void SFML_WND::setTitle (const char *title)
 {
 }

 //NOTE obsolete
 void SFML_WND::getGLVersion (unsigned int &major, unsigned int &minor)
 {
 
 }
 
 void SFML_WND::swapBuffers ()
 {
	wnd->Display();
 }
 
 bool SFML_WND::process ()
 {
	sf::Event evt;
	while (wnd->GetEvent (evt)) 
	{
		if (evt.Type == sf::Event::Closed) 
		{
			return false;
		}
	}	//Don't block input
	return true;
 }

//FIXME make input an single instance per window.
//FIXME fix memory leak
input::IInput *SFML_WND::getInputHandle ()
{
	return new input::SFML (wnd);
}

