//
// Created by mpressig on 23/08/2019.
//

#ifndef FIGURES_RECTANGLE_H
#define FIGURES_RECTANGLE_H

typedef struct {
    unsigned int height;
    unsigned int width;
}Rectangle;

unsigned int getWidth(const Rectangle *r);
unsigned int getHeight(const Rectangle *r);
void setWidth(Rectangle * r, unsigned int w);
void setHeight(Rectangle * r, unsigned int h);

unsigned int area (const Rectangle *r);
void display(const Rectangle *r);

int equals(const Rectangle *r1,const Rectangle *r2);

#endif //FIGURES_RECTANGLE_H
