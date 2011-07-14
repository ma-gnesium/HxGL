#include "SFML.h"

#include "../wnd/SFML.h"
#include <SFML/System.hpp>
#include "../glwrapper/GLES20.h"
//#include "../glwrapper/GLES11.h"
#include <iostream>
#include "../Log.h"

#ifdef LINUX
    #include <unistd.h>
#endif

namespace hxgl
{
namespace platform
{
	SFML::SFML()
	{
		HXGL_NOTIFY ("Setting up a [SFML] environment");
		wnd = new hxgl::window::SFML;
		input = NULL;
		glw = NULL;

		if (NULL != hxgl::platform::IPlatform::instance)
		{
			HXGL_ERROR ("Error: Platform already allocated");
		}
		else
		{
			hxgl::platform::IPlatform::instance = this;
		}
	}

    void SFML::allocateGLW(unsigned char major, unsigned char minor)
    {
        if (major >= 2)
        {
            glw = new hxgl::gw::GLES20;
            HXGL_NOTIFY ("Allocated a GLES20");
            return;
        }
		/*  Removing support for a while
        else if (major >= 1 && minor >= 5)
        {
            glw = new hxgl::gw::GLES11;
            HXGL_NOTIFY ("Allocated a GLES11");
            return;
        }
		*/
        else HXGL_FATAL_ERROR ("SFML::allocateGLW(): Unable to find a suitable context");
    }

    void SFML::beginMain()
    {
        while (wnd->process ())
        {
            if (enterFrameCallback != NULL)
            {
                enterFrameCallback();
            }

            wnd->swapBuffers ();
        }
    }

	SFML::~SFML ()
	{
		HXGL_NOTIFY ("Cleaning up [SFML] environment");
		delete wnd;
		delete glw;
		delete input;	//FIXME Once wnd->getInputHandle instances input, remove this delete
	}
}
}//NAMESPACE HXGL

hxgl::platform::SFML sfml;

