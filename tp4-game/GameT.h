/*
// Created by Efe Cagin Yildirim on 09/11/2026.
*/

#ifndef TP4_GAME_GAMET_H
#define TP4_GAME_GAMET_H

#include "Game.h"
#include <iostream>
#include <array>

namespace nsGame {

    template <unsigned int W, unsigned int H>
    class GameT : public Game {
    protected:
        std::array<std::array<Color, W>, H> grid_;   // grid_[ligne][colonne]

    public:
        GameT() { GameT::start(); }

        bool isFinished() const override;
        void display() const override;
        void start() override;

        virtual char getDisplayPlayer1() const { return '1'; }
        virtual char getDisplayPlayer2() const { return '2'; }
    };

    template <unsigned int W, unsigned int H>
    void GameT<W, H>::start() {
        for (auto &row : grid_)
            row.fill(EMPTY);
    }

    template <unsigned int W, unsigned int H>
    bool GameT<W, H>::isFinished() const {
        if (getWinner() != EMPTY)
            return true;                   // il y a un gagnant
        for (const auto &row : grid_)
            for (Color cell : row)
                if (cell == EMPTY)
                    return false;          // il reste au moins une case libre
        return true;                       // grille pleine
    }

    template <unsigned int W, unsigned int H>
    void GameT<W, H>::display() const {
        for (const auto &row : grid_) {
            for (Color cell : row) {
                char c = '.';
                if (cell == PLAYER1)      c = getDisplayPlayer1();
                else if (cell == PLAYER2) c = getDisplayPlayer2();
                std::cout << c << ' ';
            }
            std::cout << std::endl;
        }
    }

} // end namespace nsGame

#endif /*TP4_GAME_GAMET_H*/
