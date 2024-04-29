 #include <stdio.h>
/*duotai  */
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

void drawCircle(void* shape) {
    Circle* circle = (Circle*)shape;
    printf("Circle at (%d,%d) with radius %d\n", circle->x, circle->y, circle->radius);
}

void drawLine(void* shape) {
    Line* line = (Line*)shape;
    printf("Line from (%d,%d) to (%d,%d)\n", line->x1, line->y1, line->x2, line->y2);
}

int main() {
    Circle circle = {
        .base = { .draw = drawCircle }
        .x = 1,
        .y = 5,
        .radius = 10,
    };

    Line line = {
        .base = { .draw = drawLine }
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