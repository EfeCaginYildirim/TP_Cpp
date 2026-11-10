#include <iostream>
#include <memory>
#include "PlayPower4.h"
#include "PlayTicTacToe.h"

int main() {
    std::unique_ptr<nsGame::Play> play = std::make_unique<nsGame::PlayPower4>();
    play->run();

    play.reset();
    std::cout << "fin du main" << std::endl;
    return 0;
}
