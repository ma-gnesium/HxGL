#ifndef INPUT_SFML_H
#define INPUT_SFML_H

#include "IInput.h"
#include <SFML/Window.hpp>

namespace hxgl
{
namespace input
{

	class SFML:public IInput
	{
	public:
	    SFML(sf::Window *wnd):handle(wnd->GetInput()){};
		float getAnalog (unsigned int id);              //[0-1]
		unsigned int getDigital (unsigned int id);      //[0-??]  MouseX/Y is an example
		bool getToggle (unsigned int id);               //up/down
		int getMultiState (unsigned int id);      
		
	    const sf::Input &handle;
	};
	
}
}

#endif //INPUT_IINPUT_H
