//
//  graphics.h
//  Remaking_Cavestory
//
//  Created by Sean Weiss on 6/9/17.
//  Copyright © 2017 Sean Weiss. All rights reserved.
//

#ifndef graphics_h
#define graphics_h

struct SDL_Window;
struct SDL_Renderer;

class Graphics
{
public:
    Graphics();
    ~Graphics();
    
private:
    SDL_Window* _window;
    SDL_Renderer* _renderer;
};

#endif /* graphics_h */
