#include <stdio.h>
#include <stdlib.h>
#include "power.h"

int main(int argc, char *argv[])
{
    // if (argc < 3){
    //     printf("Usage: %s base exponent \n", argv[0]);
    //     return 1;
    // }
    double base = 2;
    int exponent = 3;
    double result = power(base, exponent);
    printf("%g ^ %d is %g\n", base, exponent, result);
    return 0;
}