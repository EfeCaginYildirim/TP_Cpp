/*
// Created by Efe Cagin Yildirim on 11/11/2026.
*/

#include "TicTacToe.h"
#include <iostream>

namespace nsGame {

    TicTacToe::~TicTacToe() {
        std::cout << "~TicTacToe()" << std::endl;
    }

    Color TicTacToe::getWinner() const {
        const int N = static_cast<int>(grid_.size());

        for (int i = 0; i < N; ++i) {
            Color p = grid_[i][0];
            if (p != EMPTY && grid_[i][1] == p && grid_[i][2] == p)
                return p;
            p = grid_[0][i];
            if (p != EMPTY && grid_[1][i] == p && grid_[2][i] == p)
                return p;
        }

        Color p = grid_[1][1];
        if (p != EMPTY && grid_[0][0] == p && grid_[2][2] == p)
            return p;
        if (p != EMPTY && grid_[2][0] == p && grid_[0][2] == p)
            return p;

        return EMPTY;
    }

    bool TicTacToe::isFinished() const {
        return GameT::isFinished();
    }

    bool TicTacToe::play(Color player) {
        const int N = static_cast<int>(grid_.size());

        std::cout << "Player " << (player == PLAYER1 ? 1 : 2)
                  << ", choose a cell (1-" << N * N << ") : ";

        int cell;
        if (!(std::cin >> cell)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            return false;
        }

        --cell;
        if (cell < 0 || cell >= N * N)
            return false;

        int r = cell / N;
        int c = cell % N;
        if (grid_[r][c] != EMPTY)
            return false;

        grid_[r][c] = player;
        return true;
    }

    char TicTacToe::getDisplayPlayer1() const { return 'x'; }
    char TicTacToe::getDisplayPlayer2() const { return 'o'; }

}
