#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include "stdint.h"

struct animal_vtbl;
// typedef struct animal_vtbl Animal_vtbl_t;

/* Data */
typedef struct animal
{
    uint16_t sex;
    uint16_t age;
    struct animal_vtbl *vptr;
}Animal_t;

/* Function */
// typedef struct animal_vtbl
// {
//     uint16_t (*Get_Age)();
//     uint16_t (*Get_Sex)();
//     void (*Set_Age)(uint16_t Age);
//     void (*Set_Sex)(uint16_t Sex);
// }Animal_vtbl_t;

struct animal_vtbl
{
    uint16_t (*Get_Age)(Animal_t *this);
    uint16_t (*Get_Sex)(Animal_t *this);
    void (*Set_Age)(Animal_t *this,uint16_t Age);
    void (*Set_Sex)(Animal_t *this,uint16_t Sex);
};

// animal_vtbl_t
extern  Animal_t *Animal_Create(void);
extern  uint16_t Get_Age(Animal_t *this);
extern  uint16_t Get_Sex(Animal_t *this);
extern  void Set_Age(Animal_t *this,uint16_t Age);
extern void Set_Sex(Animal_t *this,uint16_t Sex);
// extern  void Set_Sex(uint16_t Sex);

// extern Animal_t *Animal_p;
// extern struct  animal_vtbl *Animal_vtbl_p;

#endif