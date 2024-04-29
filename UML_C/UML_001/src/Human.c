#include "Human.h"
/* Humman */
void set_age(Human *p, int age) 
{ 
    p->age = age; 
} 

int get_age(Human *p) 
{ 
    return p->age; 
} 

void set_sex(Human *p, char sex)
{ 
    p->sex = sex; 
} 

char get_sex(Human *p) 
{ 
    return p->sex; 
} 