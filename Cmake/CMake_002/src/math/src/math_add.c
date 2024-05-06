#include "../inc/math_add.h"
int64_t my_add(uint8_t num)
{
    int64_t result = 0;

    for (int64_t i=1; i<=num; i++)
    {
        result += i;
    }
    printf("From 1 to %d add result is %ld\n",num,result);
    return(result);
}