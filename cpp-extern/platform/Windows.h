#ifndef PLATFORM_WINDOWS_H
#define PLATFORM_WINDOWS_H

#include "IPlatform.h"
#include "../wnd/SFML_WND.h"
#include "../glwrapper/GLES20.h"
#include "../glwrapper/GLES11.h"
#include <iostream>
#include "../Log.h"

namespace hxgl
{
namespace platform
{
	class Windows : public IPlatform
	{
	public:
		Windows();
		~Windows();

		void beginMain();
		void allocateGLW(unsigned char major, unsigned char minor);
	};
}
}//NAMESPACE HXGL

#endif //PLATFORM_WINDOWS_H
