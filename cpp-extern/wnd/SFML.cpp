#include "SFML.h"

namespace hxgl
{
namespace window
{
	SFML::SFML()
	{
	}

	//FIXME SUPPORT MULTIPLE WINDOWS
	//FIXME Support specified window size
	unsigned int SFML::create ( const char *title, unsigned int width, unsigned int height, bool show )
	{
		//FIXME fix memory leak
		sf::WindowSettings s;		
		s.DepthBits = 24;
		s.StencilBits = 8;
		s.AntialiasingLevel = 8;
		unsigned int handle = (unsigned int)new sf::Window(sf::VideoMode(width,height,32), title, sf::Style::Close, s);
		SFML::activate( handle );

		if( show )
		{
			SFML::show( show );
		}

		return handle;
	}

	void SFML::destroy( )
	{
		wnd->Close( );
		delete wnd;
	}

	void SFML::activate( unsigned int handle )
	{
		wnd = ((sf::Window *)handle);
		wnd->SetActive( );
	}

	void SFML::show (bool isVisible)
	{
		wnd->Show (isVisible);
	}

	void SFML::resize(const int width, const int height)
	{
		wnd->SetSize( width, height );
	}
	
	void SFML::position (const int x, const int y)
	{
		wnd->SetPosition( x, y );
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
}
}
