#ifndef INPUT_IINPUT_H
#define INPUT_IINPUT_H

namespace hxgl
{
namespace input
{

	class IInput
	{
	public:
		//FIXME Refactor for componental device support 
		//(Eg: be able to combine touch-screen/keyboard/mouse for whatever is actually supported)
		virtual int pollKeyEvent () = 0;	//NOTE returns keycode with 32bit set if down, or unset if up.
		virtual bool checkKeyStatus (const int &keyCode) = 0;
		virtual int mouseX () = 0;
		virtual int mouseY () = 0;
		virtual bool isMouseLeftDown () = 0;
		virtual bool digitalStatus (const unsigned short &keyCode) = 0;
		virtual float analogStatus (const unsigned short &keyCode) = 0;
	};
}
}

#endif //INPUT_IINPUT_H
