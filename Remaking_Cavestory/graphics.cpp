//
//  graphics.cpp
//  Remaking_Cavestory
//
//  Created by Sean Weiss on 6/9/17.
//  Copyright © 2017 Sean Weiss. All rights reserved.
//

#include <stdio.h>

#include <SDL2/SDL.h>

#include "graphics.h"

/* Graphics class
     Holds all information dealing with graphics for the game */

Graphics::Graphics()
{
    SDL_CreateWindowAndRenderer(640, 480, 0, &this->_window, &this->_renderer );
    SDL_SetWindowTitle( this->_window, "Cavestory" );
}

Graphics::~Graphics() {
    SDL_DestroyWindow( this->_window );
}
