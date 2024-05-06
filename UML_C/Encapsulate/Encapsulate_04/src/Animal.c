#include "stdint.h"
#include "string.h"
#include "stdlib.h"
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


Animal_t * Animal_Create(void)
{

    Animal_t *Animal_Temp;
    struct  animal_vtbl *Animal_vtbl_Temp;
    /* 动态分配内存 */
    Animal_Temp=(Animal_t *)malloc(sizeof(Animal_Temp));
    Animal_vtbl_Temp=(struct  animal_vtbl *)malloc(sizeof(Animal_vtbl_Temp));    
    /* 清零 */
    memset(Animal_Temp,0,sizeof(Animal_Temp));
    // struct animal_vtbl *Animal_vtbl_Temp;
    /* Function connect to Data */
    Animal_vtbl_Temp->Get_Age   =   Get_Age;
    Animal_vtbl_Temp->Get_Sex   =   Get_Sex;
    Animal_vtbl_Temp->Set_Age   =   Set_Age;
    Animal_vtbl_Temp->Set_Sex   =   Set_Sex;
    Animal_Temp->vptr=Animal_vtbl_Temp;

    // Animal_vtbl_p->Get_Age   =   Get_Age;
    // Animal_vtbl_p->Get_Sex   =   Get_Sex;
    // Animal_vtbl_p->Set_Age   =   Set_Age;
    // Animal_vtbl_p->Set_Sex   =   Set_Sex;
    // Animal_p->vptr=Animal_vtbl_p;
    // return Animal_p;
    return Animal_Temp;
}