#ifndef PLATFORM_LINUX_H
#define PLATFORM_LINUX_H

#include "IPlatform.h"
#include "../wnd/SFML_WND.h"
#include "../glwrapper/GLES20.h"
#include "../glwrapper/GLES11.h"
#include <iostream>
#include "../Log.h"
#include <unistd.h>
#include "../Log.h"

namespace hxgl
{
namespace platform
{
	class Linux : public IPlatform
	{
	public:
		Linux();
		~Linux();

		void beginMain();
		void allocateGLW(unsigned char major, unsigned char minor);
	};
}
}//NAMESPACE HXGL

#endif //PLATFORM_LINUX_H
