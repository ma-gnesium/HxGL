#include "Windows.h"

namespace platform
{
	Windows::Windows()
	{
		HXGL_NOTIFY ("Your platform: [Windows]. Setting up a [Windows] environment");
		wnd = new SFML_WND;
		//input = wnd->getInputHandle();

		if (NULL != IPlatform::platform)
		{
			HXGL_ERROR ("Error: Platform already allocated");
		}
		else
		{
			IPlatform::platform = this;
		}
	}

    void Windows::allocateGLW(unsigned char major, unsigned char minor)
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

platform::Windows win;

