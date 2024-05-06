#include "stdio.h"
#include "Shape.h"
/* polymorphism 多态*/

int main() {
    Circle circle = {
        .base = { .draw = drawCircle },
        .x = 1,
        .y = 5,
        .radius = 10,
    };

    Line line = {
        .base = { .draw = drawLine },
        .x1 = 2,
        .y1 = 3,
        .x2 = 7,
        .y2 = 9,
    };

    Shape* shapes[2];
    shapes[0] = (Shape*)&circle;
    shapes[1] = (Shape*)&line;

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw(shapes[i]);
    }

    return 0;
}