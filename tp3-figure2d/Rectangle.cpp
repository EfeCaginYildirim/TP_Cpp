/*
// Created by Efe Cagin Yildirim on 04/11/2026.
*/

#include "Rectangle.h"
#include <iostream>
#include <ostream>

Rectangle::Rectangle(unsigned int w, unsigned int h) : width_(w), height_(h) {};

/*
unsigned int Rectangle_Poo::getWidth() const {
    return this->width;
}

unsigned int Rectangle_Poo::getHeight() const {
    return this->height;
}

void Rectangle_Poo::setWidth(unsigned int w) {
    this->width = w;
}

void Rectangle_Poo::setHeight(unsigned int h) {
    this->height = h;
}
*/
double Rectangle::area () const {
    return width_ * height_;
}
/*
void Rectangle_Poo::display() const {
    std::cout << "This rectangle has a width of:" << width << "and a height of:"<< height<< std::endl;
}
*/
void Rectangle::display() const {
    std::cout << "This rectangle has a width of " << width_
       << " and a height of " << height_ << std::endl;
}
bool Rectangle::equals(const Rectangle &r1) const {
    return ((width_ == r1.width_ && height_ == r1.height_) || (width_ == r1.height_ && height_ == r1.width_)) ;
}

std::ostream& operator << (std::ostream &os, const Rectangle &r1) {
    r1.display();
    return os;
}
