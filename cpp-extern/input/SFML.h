#ifndef INPUT_SFML_H
#define INPUT_SFML_H

#include <SFML/Window.hpp>
#include "IInput.h"

namespace input
{
	class SFML : public input::IInput
	{
	public:
		SFML (sf::Window *wnd);
		int pollKeyEvent ();
		bool checkKeyStatus (const int &KeyCode);
		int mouseX ();
		int mouseY ();
		bool isMouseLeftDown ();
		bool digitalStatus (const unsigned short &keyCode);
		float analogStatus (const unsigned short &keyCode);

	private:
		sf::Window *_wnd;
	};
}

#endif //INPUT_SFML_H
