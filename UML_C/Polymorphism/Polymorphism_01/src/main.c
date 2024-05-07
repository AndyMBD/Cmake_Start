#include "stdio.h"
#include "Shape.h"
/* Polymorphism 多态*/

int main() 
{
    #if def_Pointer
        Triangle_t T1;

        T1.base->draw=draw_Triangle;
        T1.x1=10;
        T1.x2=20;
        T1.x3=30;
        T1.base->draw(&T1);

        // Line_t L1;
        // L1.base->draw=draw_Line;
        // L1.x1=100;
        // L1.x2=200;
        // L1.base->draw(&L1);

        // Line_t *L2;
        // L2->base->draw=draw_Line;
        Line_t *L2;
        L2->base->draw=draw_Line;
        L2->x1=1000;
        L2->x2=2000;
        L2->base->draw(L2);
    #else
        Triangle_t T1={
            .base={.draw=draw_Triangle,},
            .x1=10,
            .x2=20,
            .x3=30,
        };

        Triangle_t T2;
        T2.base.draw=draw_Triangle;
        T2.x1=100;
        T2.x2=200;
        T2.x3=300;
        T2.base.draw(&T2);
        
        Line_t L1;
        L1.base.draw=draw_Line;
        L1.x1=1000;
        L1.x2=2000;
        L1.base.draw(&L1);

        // Line_t *L2;
        // L2->base.draw=draw_Line;
        // L2->x1=1000;
        // L2->x2=2000;
        // L2->base.draw(L2);
    #endif
    
    return 0;
}