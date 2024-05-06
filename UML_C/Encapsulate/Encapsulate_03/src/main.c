#include "stdio.h"
#include "stdint.h"
#include "Animal.h"
/* Encapsulating 封装 */
int16_t main()
{
    
    Animal_t dog_p;
    Animal_t *dog_pp;
    struct animal_vtbl   dog_table;
    struct animal_vtbl   *dog_table_gg;
    /* Initialize */
    /* The function Name is Same as Function Address */
    dog_table.Set_Age   =   Set_Age;
    dog_table.Set_Sex   =   Set_Sex;
    dog_table.Get_Age   =   Get_Age;
    dog_table.Get_Sex   =   Get_Sex;
    // dog_table.Set_Age=&Set_Age;
    // dog_table.Set_Sex=&Set_Sex;
    // dog_table.Get_Age=&Get_Age;
    // dog_table.Get_Sex=&Get_Sex;

    /* Set Function */    
    dog_table.Set_Age(&dog_p,40);
    dog_table.Set_Sex(&dog_p,40);

    // dog_p->vptr->Set_Age(dog_p,10);
    // dog_p->vptr->Set_Sex(dog_p,10);
    printf("------------\n");
    printf("dog_p age = %d\n",dog_p.age);
    printf("dog_p sex = %d\n",dog_p.sex);
    printf("------------\n");

    printf("------------\n");
    printf("dog_p age = %d\n",dog_table.Get_Age(&dog_p));
    printf("dog_p sex = %d\n",dog_table.Get_Sex(&dog_p));
    printf("------------\n");

    /* Initialize */
    /* The function Name is Same as Function Address */
    dog_table_gg->Set_Age   =   Set_Age;
    dog_table_gg->Set_Sex   =   Set_Sex;
    dog_table_gg->Get_Age   =   Get_Age;
    dog_table_gg->Get_Sex   =   Get_Sex;

    dog_pp->vptr=dog_table_gg;

    // dog_p.vptr->Set_Age =   &Set_Age;
    // dog_p.vptr->Set_Sex =   &Set_Sex;
    return 0;
}
