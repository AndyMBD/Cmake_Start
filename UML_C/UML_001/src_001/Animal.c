#include "Animal.h"
// struct human_t Human;
/* Animal */
void Animal_Creator(Animal *this, int age, int weight)
{
    this->age = age;
    this->weight = weight;
}

int Animal_GetAge(Animal *this)
{
    return this->age;
}

int Animal_GetWeight(Animal *this)
{
    return this->weight;
}


