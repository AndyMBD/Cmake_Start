#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include "stdint.h"

struct animal_vtbl;

/* Data */
typedef struct animal
{
    uint16_t sex;
    uint16_t age;
    struct animal_vtbl *vptr;
}Animal_t;

/* Function */
struct animal_vtbl
{
    void (*Set_Age)(Animal_t *this, uint16_t Age);
    void (*Set_Sex)(Animal_t *this, uint16_t Sex);
    uint16_t (*Get_Age)(Animal_t *this);
    uint16_t (*Get_Sex)(Animal_t *this);
};
// animal_vtbl_t
extern uint16_t Get_Age(Animal_t *this);
extern uint16_t Get_Sex(Animal_t *this);
extern void Set_Age(Animal_t *this,uint16_t Age);
extern void Set_Sex(Animal_t *this,uint16_t Sex);

#endif