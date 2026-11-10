/*
// Created by Efe Cagin Yildirim on 11/11/2026.
*/

#include "PlayPower4.h"
#include "Power4.h"

namespace nsGame {

    PlayPower4::PlayPower4() {
        game_ = std::move(std::make_unique<Power4>());
    }

}
