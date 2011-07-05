#ifndef PLATFORM_ANDROID_H
#define PLATFORM_ANDROID_H

#include "IPlatform.h"
#include "../wnd/DummyWnd.h"
#include "../glwrapper/GLES20.h"
#include "../glwrapper/GLES11.h"
#include <iostream>
#include "../Log.h"

namespace platform
{
	class Android : public IPlatform
	{
	public:
		Android();
		~Android();

		void beginMain();
		void allocateGLW(unsigned char major, unsigned char minor);
	};
}

#endif //PLATFORM_WINDOWS_H
