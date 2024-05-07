#ifndef _SHAPE_H_
#define _SHAPE_H_
#include "stdint.h"
#define def_Pointer 0
typedef struct shape {
    void (*draw)(void* shape);
}Shape_t;

typedef struct triangle
{
    #if def_Pointer 
        Shape_t *base;
    #else
        Shape_t base;
    #endif
    uint16_t x1;
    uint16_t x2;
    uint16_t x3;
    /* data */
}Triangle_t;

typedef struct line
{
    #if def_Pointer
        Shape_t *base;
    #else 
        Shape_t base;
    #endif
    uint16_t x1;
    uint16_t x2;
}Line_t;

extern void draw_Line(void *Shape);
extern void draw_Triangle( void * Shape);

#endif