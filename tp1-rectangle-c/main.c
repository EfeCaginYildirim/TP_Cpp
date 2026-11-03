#include "rectangle.h"
#include <stdio.h>

int main() {
    Rectangle ra, rb;
    setWidth(&ra,10);
    setHeight(&ra, 20);
    setWidth(&rb,20);
    setHeight(&rb, 10);

    display(&ra);
    printf("The area of this rectangle is %u\n",area(&ra));

    printf("Are these two rectangles equal? %d\n", equals(&ra,&rb));

    return 0;
}