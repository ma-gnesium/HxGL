#ifndef PLATFORM_SFML_H
#define PLATFORM_SFML_H

#include "IPlatform.h"

namespace hxgl
{
namespace platform
{
	class SFML : public IPlatform
	{
	public:
		SFML();
		~SFML();
		
		void beginMain();
		void allocateGLW(unsigned char major, unsigned char minor);
	};
}
}//NAMESPACE HXGL

#endif //PLATFORM_SFML_H
