//开始构造对象，既然是控制器，对象必须具有输入，输出，调试参数
//属性就是：参数值，输入值，输出值
//行为就是：设置参数，查看参数，根据输入计算输出，构造对象，删除对象
//属性：用结构体实现

#include "stdio.h"
#include <string.h>
#include <stdlib.h>
//控制器对象

//控制器对象属性
typedef struct 
{
    
    int input;/*控制器输入*/
    int ouput;/*控制器输出*/
    int P_parameter,I_parameter,D_parameter;/*控制调试参数*/
    int Sum_error;/*总偏差，位置式PID积分相关的参数*/
    int Last_error;/*上次偏差，位置式PID积分相关的参数*/

}controller;

//构造对象,初始化
controller *Ctor_controller(void)
{  
    controller *temp;
    temp=(controller *)malloc(sizeof(controller));
    //清零
    memset(temp,0,sizeof(controller));
    return temp;
}

//删除对象
void Del_ontroller(controller * const Me)
{
    if(Me!=NULL) free(Me);
}

//设置控制器参数
void Write_controller(controller * const Me,int P,int I,int D)
{
    Me->P_parameter=P;
    Me->I_parameter=I;
    Me->D_parameter=D;
}

//读取控制器参数的值
controller Read_controller(const controller * const Me,int P,int I,int D)
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
			
    return(Me->ouput);           // 返回计算值    
}

int main()
{
    controller *test;
    controller read_val;

    //构造，创建一个对象
    test=Ctor_controller();

    //设置对象的值
    Write_controller(test,1,1,1);
    
    //查看对象的值
    read_val=Read_controller(test,1,1,1);
    printf("对象 P= %d I=%d D=%d \r\n",read_val.P_parameter,read_val.I_parameter,read_val.D_parameter);

    //调用控制器一次：
    printf("控制器输出=%d \r\n",Out_controller(test,100));
    
    //删除/销毁一个对象
    Del_ontroller(test);
}

