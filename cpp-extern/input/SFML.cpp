#include "SFML.h"
#include "../Log.h"

namespace input
{
	//FIXME This just eats events if they are not input.
	SFML::SFML (sf::Window *wnd)
	{
		_wnd = wnd;
	}

	int SFML::pollKeyEvent ()
	{
		unsigned int keyCode = 0;
		sf::Event evt;
		if (_wnd->GetEvent(evt))
		{
			if (evt.Type == sf::Event::KeyPressed)
			{
				keyCode =  (unsigned int)evt.Key.Code;
				keyCode |=  0x80000000;	//set 32nd bit to 1 "Down"
			}else if (evt.Type == sf::Event::KeyReleased){
				keyCode = (unsigned int)evt.Key.Code;
			}
			if (keyCode == -1)
			{
				//Non functioning key. 
				keyCode = 0;	//-1 is our "No event status"
			}
		}
		return keyCode;
	}
	bool SFML::checkKeyStatus (const int &KeyCode)
	{
		//FIXME Must poll events for IsKeyDown to work
		sf::Event evt;
		while (_wnd->GetEvent(evt))
		{
		}
		//End hack

		return _wnd->GetInput().IsKeyDown((sf::Key::Code)KeyCode);
	}

	int SFML::mouseX ()
	{
		return _wnd->GetInput().GetMouseX ();
	}
	
	int SFML::mouseY ()
	{
		return _wnd->GetInput().GetMouseY ();
	}

	bool SFML::isMouseLeftDown ()
	{
		return _wnd->GetInput().IsMouseButtonDown (sf::Mouse::Left);
	}

	//FIXME requires a proper event poller in wnd
	bool SFML::digitalStatus (const unsigned short &keyCode)
	{
		return _wnd->GetInput ().IsKeyDown ((sf::Key::Code)keyCode);
	}

	float SFML::analogStatus (const unsigned short &keyCode)
	{
		throw "Not implemented";
		return 0.0;
	}

}
