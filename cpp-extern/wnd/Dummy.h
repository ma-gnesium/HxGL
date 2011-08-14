#ifndef WND_DUMMY_H
#define WND_DUMMY_H

#include "IWND.h"
#include "../input/Dummy.h"

namespace hxgl
{
namespace window
{

	class Dummy: public IWND
	{
	public:
		Dummy();
		~Dummy();
		unsigned int create ( const char *title, unsigned int width, unsigned int height, bool show ) = 0;
		void destroy( ) = 0;
		void activate( unsigned int handle ) = 0;
		void show( bool visible) = 0;
		void resize (const int width, const int height) = 0;  //STUB
		void swapBuffers() = 0; 
		bool process() = 0;
	};

}
}

#endif
