//开始构造对象，既然是控制器，对象必须具有输入，输出，调试参数
//属性就是：参数值，输入值，输出值
//行为就是：设置参数，查看参数，根据输入计算输出，构造对象，删除对象
//属性：用结构体实现

#include "stdio.h"
#include <string.h>
#include <stdlib.h>

#include "oop.h"


int main()
{
    controller *test;
    controller read_val;

    //构造，创建一个对象，返回对象指针
    test=Ctor_controller();

    //设置对象的值 
    test->vptr->Write_controller(test,1,1,1);
    
    //查看对象的值
    read_val=test->vptr->Read_controller(test);

    printf("对象 P= %d I=%d D=%d \r\n",read_val.P_parameter,read_val.I_parameter,read_val.D_parameter);

    //调用控制器一次：
    printf("控制器输出=%d \r\n",test->vptr->Out_controller(test,100));
    
    //删除/销毁一个对象
    test->vptr->Del_controller(test);
    return 0;
}

