/*
 *  IPhone.h
 *  HxGL
 *
 *  Created by Caue Joffe on 7/10/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef PLATFORM_IPHONE_H
#define PLATFORM_IPHONE_H
#include "IPlatform.h"
#include "../wnd/DummyWnd.h"
#include "../glwrapper/GLES20.h"
#include "../glwrapper/GLES11.h"
#include <iostream>
#include "../Log.h"

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>

#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
#import <QuartzCore/QuartzCore.h>

namespace hxgl
{
namespace platform
{
	class IPhone : public IPlatform
	{
	public:
		static IPhone *iphone;
		IPhone();
		~IPhone();
		
		void beginMain();
		void allocateGLW(unsigned char major, unsigned char minor);
	};
}
}//NAMESPACE HXGL

#endif //PLATFORM_IPHONE_H
