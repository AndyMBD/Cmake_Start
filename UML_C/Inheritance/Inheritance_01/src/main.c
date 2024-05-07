#include <stdio.h>
#include <stdlib.h>
#include "Human.h"
#include "Animal.h"
/* Inheritance 继承*/

int main() 
{
    Person_t* cperson = Create_Person(18, 'w', "lucy");
    
    Dog_t *dog;
    dog->Name="wangwang";
    dog->Animal.age=20;
    dog->Animal.weight=20;

    printf("-----------------------------\n");
    printf("(%d, %c) - name: %s\n", cperson->human.age, cperson->human.sex, cperson->name);
    free(cperson);
    printf("-----------------------------\n");

    printf("-----------------------------\n");
    printf("Dog Name:%s\n",dog->Name);
    printf("Dog Age:%d\n",dog->Animal.age);
    printf("Dog Weight:%d\n",dog->Animal.weight);
    
    printf("-----------------------------\n");




    return 0;

}