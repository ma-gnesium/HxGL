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
		unsigned int create ( const char *title, unsigned int width, unsigned int height, bool show );
		void destroy( );
		void activate( unsigned int handle );
		void show( bool visible);
		void resize (const int width, const int height);  //STUB
		void swapBuffers(); 
		bool process();

	private:
		sf::Window *wnd;
	};

}
}

#endif
