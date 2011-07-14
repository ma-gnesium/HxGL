#include "Android.h"

namespace hxgl
{
namespace platform
{
	Android::Android()
	{
		HXGL_NOTIFY ("Your platform: [Android]. Setting up a [Android] environment");
		wnd = new hxgl::window::Dummy;
		input = wnd->getInputHandle();

		if (NULL != hxgl::platform::IPlatform::instance)
		{
			HXGL_ERROR ("Platform already allocated");
		}
		else
		{
			hxgl::platform::IPlatform::instance = this;
		}
	}

    void Android::beginMain()
    {
        //Do nothing, android uses delegates.
    }

    void Android::allocateGLW(unsigned char major, unsigned char minor)
    {
        if (major >= 2)
        {
            glw = new hxgl::gw::GLES20;
            return;
        }
		/*  Removing support for a while
        if (major >= 1 && minor >= 1)
        {
            glw = new hxgl::gw::GLES11;
            return;
        }
		*/
        else HXGL_FATAL_ERROR ("Android::allocateGLW(): Unable to find a suitable context");
    }

	Android::~Android ()
	{
		HXGL_NOTIFY ("Cleaning up [Android] environment");
		delete wnd;
		delete glw;
		delete input;	//FIXME Once wnd->getInputHandle instances input, remove this delete
	}
}//END NAMESPACE PLATFORM
}//END NAMESPACE HXGL

hxgl::platform::Android andy;

extern "C"
{

#ifdef __GNUC__
    #define JAVA_EXPORT __attribute__ ((visibility("default"))) JNIEXPORT
#else
    #define JAVA_EXPORT JNIEXPORT
#endif

//OnRender delegate
JAVA_EXPORT int JNICALL Java_com_hxgl_HXGL_onEnterFrame(JNIEnv *env, jobject obj)
{
    if (hxgl::platform::IPlatform::instance->enterFrameCallback != NULL)
    {
        hxgl::platform::IPlatform::instance->enterFrameCallback ();
    }
    
    return 0;
}
}


























