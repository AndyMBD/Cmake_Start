/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "stdio.h"
int main(int argc, char const *argv[])
{
    int i,count;
    char char_i;
    short char_short_i;
    count =10;
    for (i = 0; i < count; i++)
    {
        // i++;/* code */
        printf("i!=%d\n",i);
    }
    printf("size of int =%d\n",sizeof(i));
    printf("size of char=%d\n",sizeof(char_i));
    printf("size of short short=%d\n",sizeof(char_short_i));
    printf("hellow \n");
    return 0;
}
