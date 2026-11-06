/*
// Created by Efe Cagin Yildirim on 06/11/2026.
*/

#ifndef TP3_FIGURE2D_CIRCLE_H
#define TP3_FIGURE2D_CIRCLE_H

#include <iostream>

#include "Figure2D.h"

class Circle : public Figure2D{
    private:
    unsigned int radius_;
    public:
    Circle(unsigned int radius = 0);

    unsigned int getRadius() const;
    void setRadius(unsigned int radius);

    void display() const override;
    double area() const override;
};

inline void Circle::setRadius(unsigned int radius) { radius_ = radius; }
inline unsigned int Circle::getRadius() const { return radius_; }


#endif //TP3_FIGURE2D_CIRCLE_H
