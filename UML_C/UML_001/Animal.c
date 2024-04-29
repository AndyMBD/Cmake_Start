#include "Animal.h"

// 父类构造函数实现
void Animal_Ctor(Animal *this, int age, int weight)
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