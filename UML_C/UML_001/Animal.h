#ifndef _ANIMAL_H_
#define _ANIMAL_H_

// 定义父类结构
typedef struct {
    int age;
    int weight;
} Animal;

// 构造函数声明
void Animal_Ctor(Animal *this, int age, int weight);

// 获取父类属性声明
int Animal_GetAge(Animal *this);
int Animal_GetWeight(Animal *this);

#endif