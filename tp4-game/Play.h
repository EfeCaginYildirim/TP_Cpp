//
// Created by mpressig on 29/08/2019.
//

#ifndef PLAY_GAME_H
#define PLAY_GAME_H

#include "Game.h"
#include "Power4.h"
namespace nsGame {
    class Play {
    public:
        Play():current_player_(PLAYER1),p4_(),winner_(nsGame::EMPTY){}
    public:
        void run();
        void display()const{return p4_.display();}
        Color getWinner(){return winner_ = p4_.getWinner();}
    protected :
        Power4 p4_;
        Color current_player_;
        Color winner_;
    };

}


#endif //POWER4_GAME_H
