#ifndef _SHAPE_H_
#define _SHAPE_H_

typedef struct shape {
    void (*draw)(void* shape);
} Shape;

typedef struct {
    Shape base;
    int x;
    int y;
    int radius;
} Circle;

typedef struct {
    Shape base;
    int x1;
    int y1;
    int x2;
    int y2;
} Line;
extern void drawCircle(void* shape);
extern void drawLine(void* shape);
#endif