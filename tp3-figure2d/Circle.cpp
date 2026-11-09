/*
// Created by Efe Cagin Yildirim on 06/11/2026.
*/

#include "Circle.h"
#include <cmath>

Circle::Circle(unsigned int radius) : radius_(radius) {};

void Circle::display() const{
    std::cout << "Circle with radius " << radius_ << std::endl;
}
double Circle::area() const {
    return radius_*radius_*M_PI;
}
