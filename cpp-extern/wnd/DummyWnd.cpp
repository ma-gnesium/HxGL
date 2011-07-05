#include "DummyWnd.h"

#ifndef NULL
#define NULL 0
#endif
 

//FIXME ADD CONSTRUCTOR/DESTRUCTOR
void DummyWnd::init ()
{
}

void DummyWnd::terminate ()
{
 
}

//FIXME SUPPORT MULTIPLE WINDOWS
//FIXME Support specified window size
bool DummyWnd::create()
{
    return true;	//FIXME check if window creation was successful
}

void DummyWnd::show (bool isVisible)
{
}

void DummyWnd::resize()
{
}

void DummyWnd::setTitle (const char *title)
{
}

void DummyWnd::getGLVersion (unsigned int &major, unsigned int &minor)
{

}

void DummyWnd::swapBuffers ()
{
}

bool DummyWnd::process ()
{
    return true;
}

//FIXME make input an single instance per window.
//FIXME fix memory leak
input::IInput *DummyWnd::getInputHandle ()
{
    return NULL;
}

