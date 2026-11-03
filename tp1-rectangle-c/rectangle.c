//
// Created by mpressig on 23/08/2019.
//

#include "rectangle.h"
#include <stdlib.h> //pour NULL


unsigned int getWidth(const Rectangle *r)
{
    if(NULL != r)
        return r->width;
    return -1;
}
unsigned int getHeight(const Rectangle *r)
{
    if(NULL != r)
        return r->height;
    return -1;
}
void setWidth(Rectangle * r, unsigned int w)
{
    if(NULL != r)
        r->width = w;
}
void setHeight(Rectangle * r, unsigned int h)
{
    if(NULL != r)
        r->height = h;
}

unsigned int area (const Rectangle *r)
{
    if(NULL != r)
        return r->width * r-> height;

}
void display(const Rectangle *r)
{
    printf("This rectangle has a width of %u and a height of %u\n", r->width, r->height);
}


int equals(const Rectangle *r1,const Rectangle *r2)
{
    return (r1->height == r2->height && r1->width == r2->width) ||  (r1->height == r2->width && r1->width == r2->height);
}