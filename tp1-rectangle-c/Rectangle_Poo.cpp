/*
// Created by Efe Cagin Yildirim on 04/11/2026.
*/

#include "Rectangle_Poo.h"
#include <iostream>
#include <ostream>

Rectangle_Poo::Rectangle_Poo(unsigned int w, unsigned int h) : width(w), height(h) {};

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
unsigned int Rectangle_Poo::area () const {
    return width * height;
}
/*
void Rectangle_Poo::display() const {
    std::cout << "This rectangle has a width of:" << width << "and a height of:"<< height<< std::endl;
}
*/
void Rectangle_Poo::display(std::ostream &os) const {
    os << "This rectangle has a width of " << width
       << " and a height of " << height;
}
bool Rectangle_Poo::equals(const Rectangle_Poo &r1) const {
    return ((width == r1.width && height == r1.height) || (width == r1.height && height == r1.width)) ;
}

std::ostream& operator << (std::ostream &os, const Rectangle_Poo &r1) {
    r1.display(os);
    return os;
}
