#include "Linux.h"
#include "../Log.h"

namespace platform
{
	Linux::Linux()
	{
		HXGL_NOTIFY ("Your platform: [Linux]. Setting up a [Linux] environment");

		wnd = new SFML_WND;
		input = wnd->getInputHandle();

		if (NULL != IPlatform::platform)
		{
			HXGL_ERROR ("Unable to initialize [Linux] platform, a platform already exists.");
		}
		else
		{
			IPlatform::platform = this;
		}
	}

	void Linux::allocateGLW(unsigned char major, unsigned char minor)
    {
        if (major >= 2)
        {
            glw = new GLES20;
            return;
        }
        if (major >= 1 && minor >= 5)
        {
            glw = new GLES11;
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

platform::Linux lin;
