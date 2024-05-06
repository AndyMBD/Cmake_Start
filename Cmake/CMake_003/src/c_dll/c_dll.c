#include "c_dll.h"
void my_add(uint8_t num)
{
    int64_t result = 0;

    for (int64_t i=1; i<=num; i++)
    {
        result += i;
    }
    printf("From 1 to %d add result is %ld\n",num,result);
}