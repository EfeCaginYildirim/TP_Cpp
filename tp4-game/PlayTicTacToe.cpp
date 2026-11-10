/*
// Created by Efe Cagin Yildirim on 11/11/2026.
*/

#include "PlayTicTacToe.h"
#include "TicTacToe.h"

namespace nsGame {

    PlayTicTacToe::PlayTicTacToe() {
        game_ = std::move(std::make_unique<TicTacToe>());
    }

}
