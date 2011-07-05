#ifndef PLATFORM_IPLATFORM_H
#define PLATFORM_IPLATFORM_H

#include "../input/IInput.h"
#include "../wnd/IWND.h"
#include "../glwrapper/IGL.h"

namespace platform
{

	class IPlatform
	{
	public:
		static IPlatform *platform;
		
		input::IInput *input;
		IWND *wnd;	
		IGL *glw;
		void (*enterFrameCallback)(void);
		virtual void beginMain(void) = 0;
		virtual void allocateGLW(unsigned char major, unsigned char minor) = 0;
	};
	
}


#endif //PLATFORM_IPLATFORM_H
