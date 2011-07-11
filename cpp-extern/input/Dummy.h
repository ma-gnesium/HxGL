#ifndef INPUT_DUMMY_H
#define INPUT_DUMMY_H

#include "IInput.h"

namespace hxgl
{
namespace input
{

	class Dummy: public IInput
	{
	public:
		float getAnalog (unsigned int id){return -1;};              //[0-1]
		unsigned int getDigital (unsigned int id){return -1;};      //[0-??]  MouseX/Y is an example
		bool getToggle (unsigned int id){return false;};               //up/down
		int getMultiState (unsigned int id){return -1;};  
	};

}
}

#endif //INPUT_DUMMY_H
