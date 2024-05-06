#include "stdint.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "oop.h"
//构造对象,初始化
controller * Ctor_controller(void)
{  
    controller *ptr;
    struct controller_vtbl *table;

    ptr=(controller *)malloc(sizeof(controller));

    table=(struct controller_vtbl *)malloc(sizeof(struct controller_vtbl));    
    //清零
    memset(ptr,0,sizeof(controller));
    
    table->Ctor_controller=&Ctor_controller;
    table->Del_controller=&Del_controller;
    table->Out_controller=&Out_controller;
    table->Write_controller=&Write_controller;
    table->Read_controller=&Read_controller;

    ptr->vptr=table;

    return ptr;
}

//删除对象/析构对象
void Del_controller(controller * const Me)
{
    if(Me!=NULL) 
    {
        free(Me->vptr);
        free(Me);
    }
}

//设置控制器参数
void Write_controller(controller * const Me,int P,int I,int D)
{
    Me->P_parameter=P;
    Me->I_parameter=I;
    Me->D_parameter=D;
}

//读取控制器参数的值
controller Read_controller(const controller * const Me)
{
    return (*Me);
}

//计算控制器输出,细节看不懂没关系，只需要知道传入的是偏差，就会有输出一个计算结果就行，这个结果能够帮助控制
//至于偏差怎么定义什么时候需要用到PID控制器就知道了
int Out_controller(controller * const Me,int input)
{
    float	iIncpid=0;

    int now_error=input;//当前偏差

	Me->Sum_error+=input; 
	
    //积分量限幅，方式积分饱和过深
	if(Me->Sum_error >500)
	{
		Me->Sum_error = 500 ;
	}
	if(Me->Sum_error < -500)
	{
		Me->Sum_error = -500 ;
	}
		
    Me->ouput=Me->P_parameter * input                  // P
         +Me->I_parameter * Me->Sum_error                // I
         +Me->D_parameter * (now_error-Me->Last_error); // D

    Me->Last_error=now_error;					// 存储误差，用于下次计算		
			
    return(Me->ouput);                          // 返回计算值    
}