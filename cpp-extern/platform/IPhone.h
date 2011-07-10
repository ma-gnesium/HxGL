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


#endif //PLATFORM_IPHONE_H
