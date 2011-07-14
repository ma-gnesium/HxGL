#ifndef PLATFORM_ANDROID_H
#define PLATFORM_ANDROID_H

#include "IPlatform.h"
#include "../wnd/Dummy.h"
#include "../glwrapper/GLES20.h"
//#include "../glwrapper/GLES11.h"
#include <iostream>
#include "../Log.h"
#include <jni.h>
#include <android/log.h>
#include <GLES/gl.h>
#include <GLES/glext.h>

namespace hxgl
{
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
}//NAMESPACE HXGL

#endif //PLATFORM_WINDOWS_H
