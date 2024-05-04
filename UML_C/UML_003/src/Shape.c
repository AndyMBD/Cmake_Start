#include "Shape.h"
#include "stdio.h"


void drawCircle(void* shape) {
    Circle* circle = (Circle*)shape;
    printf("Circle at (%d,%d) with radius %d\n", circle->x, circle->y, circle->radius);
}

void drawLine(void* shape) {
    Line* line = (Line*)shape;
    printf("Line from (%d,%d) to (%d,%d)\n", line->x1, line->y1, line->x2, line->y2);
}