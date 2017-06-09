//
//  game.h
//  Remaking_Cavestory
//
//  Created by Sean Weiss on 6/9/17.
//  Copyright © 2017 Sean Weiss. All rights reserved.
//

#ifndef game_h
#define game_h

class Graphics;

class Game
{
public:
    Game();
    ~Game();
    
private:
    void gameLoop();
    void draw(Graphics &graphics);
    void update(float elapsedTime);
    
};
#endif /* game_h */
