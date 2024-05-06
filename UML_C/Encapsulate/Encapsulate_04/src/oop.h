#ifndef __OOP_H
#define __OOP_H

//控制器对象

struct controller_vtbl;

typedef struct 
{
    //对象属性    
    int input;/*控制器输入*/
    int ouput;/*控制器输出*/
    int P_parameter,I_parameter,D_parameter;/*控制调试参数*/
    int Sum_error;/*总偏差，位置式PID积分相关的参数*/
    int Last_error;/*上次偏差，位置式PID积分相关的参数*/
    
    //对象行为指针，通过指针访问函数
    struct controller_vtbl *vptr;
}controller;

//对象的行为所在表，定义对象的行为在这里，通过定义函数指针指向需要实现对象行为的指针
struct controller_vtbl
{
    controller * (*Ctor_controller)(void);
    void         (*Del_controller)(controller * const Me);
    controller   (*Read_controller)(const controller * const Me);
    void         (*Write_controller)(controller * const Me,int P,int I,int D);
    int          (*Out_controller)(controller * const Me,int input);

};

//对象行为函数
controller * Ctor_controller(void);
void Del_controller(controller * const Me);
controller Read_controller(const controller * const Me);
void Write_controller(controller * const Me,int P,int I,int D);
int Out_controller(controller * const Me,int input);

#endif
