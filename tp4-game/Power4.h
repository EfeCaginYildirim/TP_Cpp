/*
// Created by Efe Cagin Yildirim on 09/11/2026.
*/

#ifndef GAME_TEMPLATE_POWER4_H
#define GAME_TEMPLATE_POWER4_H

#include "GameT.h"

namespace nsGame {
    class Power4 : public GameT<7,6> {
    public:
        ~Power4();
        Color getWinner() const override;
        bool isFinished() const override;
        bool play(Color player) override;
        char getDisplayPlayer1() const override;
        char getDisplayPlayer2() const override;
    };
}
#endif //GAME_TEMPLATE_POWER4_H
