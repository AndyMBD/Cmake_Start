#include "stdio.h"
#include "stdint.h"
#include "Animal.h"
/* Encapsulating 封装 */
int16_t main()
{
    Animal_t dog={
                .age=10,
                .sex=10   
                };
    Animal_t *dog_p;

    printf("------------\n");
    printf("dog age = %d\n",Get_Age(&dog));
    printf("dog sex = %d\n",Get_Sex(&dog));
    printf("------------\n");

    dog.Set_Age=Set_Age;
    Set_Age(&dog,20);
    dog.Set_Sex=Set_Sex;
    Set_Sex(&dog,20);
    printf("------------\n");
    printf("dog age = %d\n",Get_Age(&dog));
    printf("dog sex = %d\n",Get_Sex(&dog));
    printf("------------\n");

    dog.Set_Age=Set_Age;
    Set_Age(&dog,30);
    dog.Set_Sex=Set_Sex;
    Set_Sex(&dog,30);
    printf("------------\n");
    dog.Get_Age=Get_Age;
    printf("dog age = %d\n",dog.Get_Age(&dog));
    dog.Get_Sex=Get_Sex;
    printf("dog sex = %d\n",dog.Get_Sex(&dog));
    printf("------------\n");

    return 0;
}
