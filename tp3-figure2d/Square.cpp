/*
// Created by Efe Cagin Yildirim on 06/11/2026.
*/

#include "Square.h"

Square::Square(unsigned int side):Rectangle(side,side) {};
void Square::display() const {
    std::cout << "Square with side: " << this->getHeight() << std::endl;
}