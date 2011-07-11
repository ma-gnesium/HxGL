#include "MacOS.h"

namespace hxgl
{
namespace platform
{
	MacOS::MacOS()
	{
		HXGL_NOTIFY ("Your platform: [MacOS]. Setting up a [MacOS] environment");

		wnd = new hxgl::window::SFML_WND;
		//input = wnd->getInputHandle();

		if (NULL != hxgl::platform::IPlatform::instance)
		{
			HXGL_ERROR ("Error: Platform already allocated");
		}
		else
		{
			hxgl::platform::IPlatform::instance = this;
		}
	}

    void MacOS::allocateGLW(unsigned char major, unsigned char minor)
    {
        if (major >= 2)
        {
            glw = new hxgl::gw::GLES20;
            HXGL_NOTIFY ("Allocated a GLES20");
            return;
        }
        if (major >= 1 && minor >= 5)
        {
            glw = new hxgl::gw::GLES11;
            HXGL_NOTIFY ("Allocated a GLES11");
            return;
        }
        else HXGL_FATAL_ERROR ("MacOS::allocateGLW(): Unable to find a suitable context");
    }

    void MacOS::beginMain()
    {
        while (wnd->process ())
        {
            if (enterFrameCallback != NULL)
            {
                enterFrameCallback();
            }

            wnd->swapBuffers ();
            sleep (1/60);
        }
    }

	MacOS::~MacOS ()
	{
		HXGL_NOTIFY ("Cleaning up [MacOS] environment");
		delete wnd;
		delete glw;
		delete input;	//FIXME Once wnd->getInputHandle instances input, remove this delete
	}
}
}//NAMESPACE HXGL

hxgl::platform::MacOS osx;
