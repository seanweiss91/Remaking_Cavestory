//
//  input.h
//  Remaking_Cavestory
//
//  Created by Sean Weiss on 6/9/17.
//  Copyright © 2017 Sean Weiss. All rights reserved.
//

#ifndef input_h
#define input_h

#include <SDL2/SDL.h>
#include <map>

class Input
{
public:
    void beginNewFrame();
    void keyUpEvent(const SDL_Event& event);
    void keyDownEvent(const SDL_Event& event);
    
    bool wasKeyPressed(SDL_Scancode key);
    bool wasKeyReleased(SDL_Scancode key);
    bool isKeyHeld(SDL_Scancode key);
private:
    std::map<SDL_Scancode, bool> _heldKeys;
    std::map<SDL_Scancode, bool> _pressedKeys;
    std::map<SDL_Scancode, bool> _releasedKeys;
    
};

#endif /* input_h */
