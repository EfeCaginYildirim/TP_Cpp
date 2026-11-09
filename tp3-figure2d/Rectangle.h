/*
// Created by Efe Cagin Yildirim on 04/11/2026.
*/

#ifndef RECTANGLE_C_RECTANGLE_POO_H
#define RECTANGLE_C_RECTANGLE_POO_H
#include <iostream>
#include <ostream>
#include "Figure2D.h"



class Rectangle : public Figure2D {
protected:
    unsigned int width_;
    unsigned int height_;
public:
    Rectangle(unsigned int w = 0,unsigned int h = 0);

    unsigned int getWidth() const;
    unsigned int getHeight() const;
    void setWidth(unsigned int w);
    void setHeight(unsigned int h);

    double area () const override;
//  void display() const;
    void display() const override;

    bool equals(const Rectangle &r1) const;
    bool operator==(const Rectangle &r1) const;


};
inline unsigned int Rectangle::getWidth() const  { return width_; }
inline unsigned int Rectangle::getHeight() const { return height_; }
inline void Rectangle::setWidth(unsigned int w)  { width_ = w; }
inline void Rectangle::setHeight(unsigned int h) { height_ = h; }
inline bool Rectangle::operator==(const Rectangle &r1) const { return equals(r1); }
std::ostream& operator << (std::ostream &os, const Rectangle &r1);
#endif //RECTANGLE_C_RECTANGLE_POO_H
