#include "SFML.h"

#include "../Log.h"

namespace hxgl
{
namespace input
{

    float SFML::getAnalog (unsigned int id)
    {
        HXGL_WARNING ("SFML::getAnalog (id): Unknown analog id");
        return -1;
    }
    
    unsigned int SFML::getDigital (unsigned int id)
    {
        switch (id)
        {
            case 0:         //MOUSE X
                return handle.GetMouseX ();
            case 1:         //MOUSE Y
                return handle.GetMouseY ();
            default:
                HXGL_WARNING ("SFML::getDigital (id): Unknown digital id");
        }
        return -1;
    }

    bool SFML::getToggle (unsigned int id)
    {
        switch (id)
        {
            case 0:         //W
                return handle.IsKeyDown (sf::Key::W);
            case 1:         //A
                return handle.IsKeyDown (sf::Key::A);
            case 2:         //S
                return handle.IsKeyDown (sf::Key::S);
            case 3:         //D
                return handle.IsKeyDown (sf::Key::D);
            default:
                HXGL_WARNING ("SFML::getToggle (id): Unknown toggle id");
        }
        return false;
    }
    
    int SFML::getMultiState (unsigned int id)
    {
        HXGL_ERROR ("SFML::getMultiState (id): Unknown MultiState id");
        return -1;
    }	
}
}


















