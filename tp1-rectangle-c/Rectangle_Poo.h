/*
// Created by Efe Cagin Yildirim on 04/11/2026.
*/

#ifndef RECTANGLE_C_RECTANGLE_POO_H
#define RECTANGLE_C_RECTANGLE_POO_H
#include <iostream>
#include <ostream>



class Rectangle_Poo{
private:
    unsigned int width;
    unsigned int height;
public:
    Rectangle_Poo(unsigned int w = 0,unsigned int h = 0);

    unsigned int getWidth() const;
    unsigned int getHeight() const;
    void setWidth(unsigned int w);
    void setHeight(unsigned int h);

    unsigned int area () const;
//  void display() const;
    void display(std::ostream &os = std::cout) const;

    bool equals(const Rectangle_Poo &r1) const;
    bool operator==(const Rectangle_Poo &r1) const;


};
inline unsigned int Rectangle_Poo::getWidth() const  { return width; }
inline unsigned int Rectangle_Poo::getHeight() const { return height; }
inline void Rectangle_Poo::setWidth(unsigned int w)  { width = w; }
inline void Rectangle_Poo::setHeight(unsigned int h) { height = h; }
inline bool Rectangle_Poo::operator==(const Rectangle_Poo &r1) const { return equals(r1); }
std::ostream& operator << (std::ostream &os, const Rectangle_Poo &r1);
#endif //RECTANGLE_C_RECTANGLE_POO_H
