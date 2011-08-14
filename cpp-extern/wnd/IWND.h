#ifndef WND_IWND_H
#define WND_IWND_H

#include "../input/IInput.h"

namespace hxgl
{
namespace window
{

	class IWND
	{
	public:
		virtual unsigned int create ( const char *title, unsigned int width, unsigned int height, bool show ) = 0;
		virtual void destroy( ) = 0;
		virtual void activate( unsigned int handle ) = 0;
		virtual void show( bool visible) = 0;
		virtual void resize (const int width, const int height) = 0;  //STUB
		virtual void swapBuffers() = 0; 
		virtual bool process() = 0;
	};

}
}

#endif
