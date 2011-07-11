#ifndef PLATFORM_IPLATFORM_H
#define PLATFORM_IPLATFORM_H

//#include "../input/IInput.h"
#include "../wnd/IWND.h"
#include "../glwrapper/IGL.h"

namespace hxgl
{
namespace platform
{

	class IPlatform
	{
	public:
		
		hxgl::input::IInput *input;
		hxgl::window::IWND *wnd;	
		hxgl::gw::IGL *glw;
		void (*enterFrameCallback)(void);
		virtual void beginMain(void) = 0;
		virtual void allocateGLW(unsigned char major, unsigned char minor) = 0;

		
	    static IPlatform *instance;
	};
}
}//NAMESPACE HXGL


#endif //PLATFORM_IPLATFORM_H
