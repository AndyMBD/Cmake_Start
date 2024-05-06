#include "stdio.h"
#include "stdint.h"
#include "Animal.h"
/* Encapsulating 封装 */


// Animal_t *Animal_Create();
int16_t main()
{
    Animal_t *dog;
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

    return 0;
}
