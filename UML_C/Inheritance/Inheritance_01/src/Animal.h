#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include "stdint.h"
// 定义父类结构
typedef struct Animal{
    uint16_t age;
    uint16_t weight;
} Animal_t;

typedef struct dog
{   
    Animal_t Animal;
    char *Name;
    /* data */
}Dog_t;


// 构造函数声明
void Animal_Creator(Animal_t *this, uint16_t age, uint16_t weight);

// 获取父类属性声明
uint16_t Animal_GetAge(Animal_t *this);
uint16_t Animal_GetWeight(Animal_t *this);

#endif