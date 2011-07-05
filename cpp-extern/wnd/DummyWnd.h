#ifndef WND_DUMMYWND_H
#define WND_DUMMYWND_H

#include "IWND.h"

class DummyWnd: public IWND
{
public:
	void init ();
	void terminate ();
	bool create ();
	void show (bool isVisible);
	void resize ();
	void setTitle (const char *title);
	void getGLVersion (unsigned int &major, unsigned int &minor);
	void swapBuffers ();
	bool process ();
	input::IInput *getInputHandle ();
};

#endif
