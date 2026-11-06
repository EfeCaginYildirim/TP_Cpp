/*
// Created by Efe Cagin Yildirim on 06/11/2026.
*/

#ifndef TP3_FIGURE2D_SQUARE_H
#define TP3_FIGURE2D_SQUARE_H

#include "Rectangle.h"
#include <iostream>


class Square : public Rectangle {
    public:
    Square(unsigned int side);
    void display() const override;
};


#endif //TP3_FIGURE2D_SQUARE_H
