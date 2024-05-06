#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include "stdint.h"
typedef struct Animal
{
    uint16_t sex;
    uint16_t age;
    void (*Set_Age)(struct Animal *this,uint16_t Age);
    void (*Set_Sex)(struct Animal *this,uint16_t Sex);
    uint16_t (*Get_Age)(struct Animal *this);
    uint16_t (*Get_Sex)(struct Animal *this);
}Animal_t;

typedef struct human
{
    
    /* data */
}Human_t;


extern uint16_t Get_Age(Animal_t *this);
extern uint16_t Get_Sex(Animal_t *this);
extern void Set_Age(Animal_t *this,uint16_t Age);
extern void Set_Sex(Animal_t *this,uint16_t Sex);

#endif