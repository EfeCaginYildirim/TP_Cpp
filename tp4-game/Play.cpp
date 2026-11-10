//
// Created by mpressig on 29/08/2019.
//

#include "Play.h"
#include <iostream>
using namespace std;

void nsGame::Play::run()
{
    //initialize game
    game_->start();
    //While nobody has won and a player can play
    while(!game_->isFinished()) {

        if( game_->play(current_player_)) {
            //change player
            if (PLAYER1 == current_player_)
                current_player_ = PLAYER2;
            else
                current_player_ = PLAYER1;
        }
        display();
    }

    cout<<"GAME OVER"<<endl;

}
