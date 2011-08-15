#include "Dummy.h"

#ifndef NULL
#define NULL 0
#endif

namespace hxgl
{
namespace window
{ 
	Dummy::Dummy ()
	{
		_inp = new hxgl::input::Dummy;
	}

	Dummy::~Dummy ()
	{
		delete _inp;
	}
	
	unsigned int Dummy::create ( const char *title, unsigned int width, unsigned int height, bool show )
	{
		return 0;
	}

	void Dummy::destroy( )
	{

	}

	void Dummy::activate( unsigned int handle )
	{

	}

	void Dummy::show (bool isVisible)
	{
	}

	void Dummy::resize(const int width, const int height)
	{
	}

	void Dummy::position (const int x, const int y)
	{
	}
	
	void Dummy::swapBuffers ()
	{
	}

	bool Dummy::process ()
	{
		return true;
	}
}
}

