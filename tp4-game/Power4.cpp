/*
// Created by Efe Cagin Yildirim on 09/11/2026.
*/

#include "Power4.h"
#include <iostream>

namespace nsGame {

    Power4::~Power4() {
        std::cout << "~Power4()" << std::endl;
    }

    Color Power4::getWinner() const {
        const int H = static_cast<int>(grid_.size());
        const int W = static_cast<int>(grid_[0].size());

        for (int i = 0; i < H; ++i) {
            for (int j = 0; j <= W - 4; ++j) {
                Color p = grid_[i][j];
                if (p != EMPTY && grid_[i][j+1] == p && grid_[i][j+2] == p && grid_[i][j+3] == p)
                    return p;
            }
        }

        for (int i = 0; i <= H - 4; ++i) {
            for (int j = 0; j < W; ++j) {
                Color p = grid_[i][j];
                if (p != EMPTY && grid_[i+1][j] == p && grid_[i+2][j] == p && grid_[i+3][j] == p)
                    return p;
            }
        }

        for (int i = 0; i <= H - 4; ++i) {
            for (int j = 0; j <= W - 4; ++j) {
                Color p = grid_[i][j];
                if (p != EMPTY && grid_[i+1][j+1] == p && grid_[i+2][j+2] == p && grid_[i+3][j+3] == p)
                    return p;
            }
        }

        for (int i = 3; i < H; ++i) {
            for (int j = 0; j <= W - 4; ++j) {
                Color p = grid_[i][j];
                if (p != EMPTY && grid_[i-1][j+1] == p && grid_[i-2][j+2] == p && grid_[i-3][j+3] == p)
                    return p;
            }
        }

        return EMPTY;
    }

    bool Power4::isFinished() const {
        return GameT::isFinished();
    }

    bool Power4::play(Color player) {
        const int H = static_cast<int>(grid_.size());
        const int W = static_cast<int>(grid_[0].size());
        std::cout << "Player " << (player == PLAYER1 ? 1 : 2)
                  << ", choose a column (1-" << W << ") : ";

        int col;
        if (!(std::cin >> col)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            return false;
        }

        --col;
        if (col < 0 || col >= W)
            return false;

        for (int i = H - 1; i >= 0; --i) {
            if (grid_[i][col] == EMPTY) {
                grid_[i][col] = player;
                return true;
            }
        }
        return false;
    }

    char Power4::getDisplayPlayer1() const {return 'r';}
    char Power4::getDisplayPlayer2() const {return 'y';}
}
