#include "stdio.h"
#include "stdint.h"
#include "Animal.h"
#include "string.h"
#include "stdlib.h"
/* Encapsulating 封装 */

// Animal_t *Animal_Create();
int16_t main()
{
    Animal_t *dog;

    Animal_t *Dog_g;
    struct  animal_vtbl *Dog_vtbl_g;

    dog=Animal_Create();
    dog->vptr->Set_Age(dog,20);
    dog->vptr->Set_Sex(dog,20);
    printf("-----------------\n");
    printf("dog age = %d\n",dog->age);
    printf("dog sex = %d\n",dog->sex);
    printf("-----------------\n");

    dog->vptr->Set_Age(dog,30);
    dog->vptr->Set_Sex(dog,30);
    printf("-----------------\n");
    printf("dog age = %d\n",dog->vptr->Get_Age(dog));
    printf("dog sex = %d\n",dog->vptr->Get_Sex(dog));
    printf("-----------------\n");

    /* Global data */
    Dog_vtbl_g->Get_Age =   Get_Age;
    Dog_vtbl_g->Get_Sex =   Get_Sex;
    Dog_vtbl_g->Set_Age =   Set_Age;
    Dog_vtbl_g->Set_Sex =   Set_Sex;
    /* Struct pointer need to allocate memory for the pointer */
    /* TODO function pointer need to allocate memory or not? */
    /* Dynamic allocate memory for Dog_g */
    Dog_g=(Animal_t *)malloc(sizeof(Dog_g));
    Dog_g->vptr =   Dog_vtbl_g;

    Dog_g->vptr->Set_Age(Dog_g,40);
    Dog_g->vptr->Set_Sex(Dog_g,40);
    printf("-----------------\n");
    printf("Dog_g age = %d\n",Dog_g->vptr->Get_Age(Dog_g));
    printf("Dog_g sex = %d\n",Dog_g->vptr->Get_Sex(Dog_g));
    printf("-----------------\n");

    return 0;
}
