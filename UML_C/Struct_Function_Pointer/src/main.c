/*
 * @Author: shun2023 544361935@qq.com
 * @Date: 2024-05-04 20:26:58
 * @LastEditors: shun2023 544361935@qq.com
 * @LastEditTime: 2024-05-04 20:28:57
 * @FilePath: \Cmake_Start\UML_C\Struct_Function_Pointer\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
struct DEMO
{
    int x,y;
    int (*func)(int,int); //函数指针
};
 
int add1(int x,int y)
{
    return x*y;
}
 
int add2(int x,int y)
{
    return x+y;
}
 
void main()
{
    struct DEMO demo;
    demo.func=add2; //结构体函数指针赋值
    //demo.func=&add2; //结构体函数指针赋值
    printf("func(3,4)=%d\n",demo.func(3,4));
    demo.func=add1;
    printf("func(3,4)=%d\n",demo.func(3,4));
}
 
/*
输出：
func(3,4)=7
func(3,4)=12
*/