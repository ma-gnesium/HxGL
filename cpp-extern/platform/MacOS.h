#ifndef PLATFORM_LINUX_H
#define PLATFORM_LINUX_H

#include "IPlatform.h"
#include "../wnd/SFML_WND.h"
#include "../glwrapper/GLES11.h"
#include "../glwrapper/GLES20.h"
#include "../Log.h"

namespace hxgl
{
namespace platform
{
	class MacOS : public IPlatform
	{
	public:
		MacOS();
		~MacOS();

		void beginMain();
		void allocateGLW(unsigned char major, unsigned char minor);
	};
}
}

#endif //PLATFORM_MACOS_H
