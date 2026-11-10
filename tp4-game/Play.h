//
// Created by mpressig on 29/08/2019.
//

#ifndef PLAY_GAME_H
#define PLAY_GAME_H

#include <memory>
#include "Game.h"

namespace nsGame {
    class Play {
    protected:
        Play():game_(),current_player_(PLAYER1),winner_(nsGame::EMPTY){}
    public:
        virtual ~Play() = default;
        void run();
        void display()const{return game_->display();}
        Color getWinner(){return winner_ = game_->getWinner();}
    protected :
        std::unique_ptr<Game> game_;
        Color current_player_;
        Color winner_;
    };

}


#endif //POWER4_GAME_H
