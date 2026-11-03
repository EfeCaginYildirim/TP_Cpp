//
// Created by mpressig on 30/08/2019.
//

#ifndef GAME_TEMPLATE_GAME_H
#define GAME_TEMPLATE_GAME_H




namespace nsGame {
    enum Color {
        EMPTY, PLAYER1, PLAYER2
    };


    class Game {
    public:

        virtual bool isFinished() const = 0;

        virtual Color getWinner() const = 0;

        virtual void display() const = 0;

        virtual void start() = 0;

        virtual bool play(Color player) = 0;

    }; //end class Game
}// end namespace nsGame


#endif //GAME_TEMPLATE_GAME_H
