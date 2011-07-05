#include "Android.h"
#include <jni.h>
#include <android/log.h>
#include <GLES/gl.h>
#include <GLES/glext.h>

namespace platform
{
	Android::Android()
	{
		HXGL_NOTIFY ("Your platform: [Android]. Setting up a [Android] environment");
		wnd = new DummyWnd;
		input = wnd->getInputHandle();

		if (NULL != IPlatform::platform)
		{
			HXGL_ERROR ("Platform already allocated");
		}
		else
		{
			IPlatform::platform = this;
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
            glw = new GLES20;
            return;
        }
        if (major >= 1 && minor >= 1)
        {
            glw = new GLES11;
            return;
        }
        else HXGL_FATAL_ERROR ("Android::allocateGLW(): Unable to find a suitable context");
    }

	Android::~Android ()
	{
		HXGL_NOTIFY ("Cleaning up [Android] environment");
		delete wnd;
		delete glw;
		delete input;	//FIXME Once wnd->getInputHandle instances input, remove this delete
	}
}

platform::Android andy;

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
    if (platform::IPlatform::platform->enterFrameCallback != NULL)
    {
        platform::IPlatform::platform->enterFrameCallback ();
    }
    
    return 0;
}
}


























