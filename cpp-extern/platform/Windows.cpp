#include "Windows.h"

namespace hxgl
{
namespace platform
{
	Windows::Windows()
	{
		HXGL_NOTIFY ("Your platform: [Windows]. Setting up a [Windows] environment");
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

    void Windows::allocateGLW(unsigned char major, unsigned char minor)
    {
        if (major >= 2)
        {
            glw = new hxgl::gw::GLES20;
            return;
        }
        if (major >= 1 && minor >= 5)
        {
            glw = new hxgl::gw::GLES11;
            return;
        }
        else HXGL_FATAL_ERROR ("Windows::allocateGLW(): Unable to find a suitable context");
    }

    void Windows::beginMain()
    {
        while (wnd->process ())
        {
            if (enterFrameCallback != NULL)
            {
                enterFrameCallback();
            }

            wnd->swapBuffers ();
            Sleep (1/60);
        }
    }

	Windows::~Windows ()
	{
		HXGL_NOTIFY ("Cleaning up [Windows] environment");
		delete wnd;
		delete glw;
		delete input;	//FIXME Once wnd->getInputHandle instances input, remove this delete
	}
}
}//NAMESPACE HXGL

hxgl::platform::Windows win;

