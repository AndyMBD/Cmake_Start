#include "stdint.h"
#include "Animal.h"
uint16_t Get_Age(Animal_t *this)
{
    return this->age;
}

uint16_t Get_Sex(Animal_t *this)
{
    return this->sex;
}

void Set_Age(Animal_t *this,uint16_t Age)
{
    this->age=Age;
}

void Set_Sex(Animal_t *this,uint16_t Sex)
{
    this->sex=Sex;
}