#ifndef INPUT_IINPUT_H
#define INPUT_IINPUT_H

namespace hxgl
{
namespace input
{

	class IInput
	{
	public:
		virtual float getAnalog (unsigned int id)=0;
		virtual unsigned int getDigital (unsigned int id)=0;
		virtual bool getToggle (unsigned int id)=0;
		virtual int getMultiState (unsigned int id)=0;
		//virtual void *getEventList (unsigned int &size)=0;
	};
}
}

#endif //INPUT_IINPUT_H
