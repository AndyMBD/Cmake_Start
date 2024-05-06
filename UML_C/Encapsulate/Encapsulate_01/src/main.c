#include "stdio.h"
#include "Human.h"
// #include "Dog.h"
/* fengzhuang */
/* Encapsulating 封装 */
int main()
{
    // 创建一个对象
    Human p; 
    // 构造对象
    p.set_age = set_age; 
    p.set_age(&p, 18); 
    p.set_sex = set_sex; 
    p.set_sex(&p, 'M');
    p.get_age = get_age; 
    printf("age: %d\n", p.get_age(&p));
    p.get_sex = get_sex;  
    printf("sex: %c\n", p.get_sex(&p)); 

    return 0;
}