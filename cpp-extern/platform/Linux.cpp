#include "Linux.h"
#include "../Log.h"

namespace hxgl
{
namespace platform
{
	Linux::Linux()
	{
		HXGL_NOTIFY ("Your platform: [Linux]. Setting up a [Linux] environment");

		wnd = new hxgl::windowSFML_WND;
		input = wnd->getInputHandle();

		if (NULL != hxgl::platform::IPlatform::instance)
		{
			HXGL_ERROR ("Unable to initialize [Linux] platform, a platform already exists.");
		}
		else
		{
			hxgl::platform::IPlatform::instance = this;
		}
	}

	void Linux::allocateGLW(unsigned char major, unsigned char minor)
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
        else HXGL_FATAL_ERROR ("Linux::allocateGLW(): Unable to find a suitable context");
    }

    void Linux::beginMain()
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

	Linux::~Linux ()
	{
		HXGL_NOTIFY ("Cleaning up [Linux] environment");
		delete wnd;
		delete glw;
		delete input;	//FIXME Once wnd->getInputHandle instances input, remove this delete
	}
}
}//NAMESPACE HXGL

platform::Linux lin;
