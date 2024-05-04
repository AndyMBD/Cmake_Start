#include "stdio.h"
#include "Animal.h"
// #include "Dog.h"
/* fengzhuang */
/* Encapsulating 封装 */
int main()
{
    // 创建一个对象
    Animal a;  
    // 构造对象
    Animal_Creator(&a, 1, 3); 
    printf("age = %d \n" "weight = %d \n", 
            Animal_GetAge(&a),
            Animal_GetWeight(&a));

    return 0;
}