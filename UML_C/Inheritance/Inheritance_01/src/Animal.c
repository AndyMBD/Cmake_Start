#include "Animal.h"
// struct human_t Human;
/* Animal */
void Animal_Creator(Animal_t *this, uint16_t age, uint16_t weight)
{
    this->age = age;
    this->weight = weight;
}

uint16_t Animal_GetAge(Animal_t *this)
{
    return this->age;
}

uint16_t Animal_GetWeight(Animal_t *this)
{
    return this->weight;
}


