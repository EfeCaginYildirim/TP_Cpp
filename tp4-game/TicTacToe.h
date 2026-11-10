/*
// Created by Efe Cagin Yildirim on 11/11/2026.
*/

#ifndef TP4_GAME_TICTACTOE_H
#define TP4_GAME_TICTACTOE_H

#include "GameT.h"

namespace nsGame {

    class TicTacToe : public GameT<3, 3> {
    public:
        ~TicTacToe();
        Color getWinner() const override;
        bool isFinished() const override;
        bool play(Color player) override;
        char getDisplayPlayer1() const override;
        char getDisplayPlayer2() const override;
    };

}

#endif
