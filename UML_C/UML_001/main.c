#include "stdio.h"
#include "Animal.h"
// #include "Dog.h"

int main()
{
    // 在栈上创建一个对象
    Animal a;  
    // 构造对象
    Animal_Ctor(&a, 1, 3); 
    printf("age = %d, weight = %d \n", 
            Animal_GetAge(&a),
            Animal_GetWeight(&a));
    return 0;
}