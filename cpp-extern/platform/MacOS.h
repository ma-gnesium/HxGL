#ifndef PLATFORM_LINUX_H
#define PLATFORM_LINUX_H

#include "IPlatform.h"

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

#endif //PLATFORM_MACOS_H
