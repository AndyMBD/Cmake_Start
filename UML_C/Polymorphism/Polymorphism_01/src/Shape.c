#include "Shape.h"
#include "stdio.h"


void draw_Triangle( void * Shape)
{
    /* point type convert from void to Triangle_t */
    Triangle_t *Triangle =(Triangle_t*) Shape;
    printf("---------------------\n");
    printf("This is Draw Triangle\n");
    printf("Triangle x1:%d\n",Triangle->x1);
    printf("Triangle x1:%d\n",Triangle->x2);
    printf("Triangle x1:%d\n",Triangle->x3);
    printf("---------------------\n");

}

void draw_Line(void *Shape)
{
    /* point type convert from void to Line_t */
    Line_t *line=(Line_t*)Shape;
    printf("---------------------\n");
    printf("This is draw Line\n");
    printf("Line x1:%d\n",line->x1);
    printf("Line X2:%d\n",line->x2);
    printf("---------------------\n");
}
