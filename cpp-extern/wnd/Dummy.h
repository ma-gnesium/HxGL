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
		unsigned int create ( const char *title, unsigned int width, unsigned int height, bool show );
		void destroy( );
		void activate( unsigned int handle );
		void show( bool visible);
		void resize (const int width, const int height);
		void position (const int x, const int y);
		void swapBuffers(); 
		bool process();
	};

}
}

#endif
