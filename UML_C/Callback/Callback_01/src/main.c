
#include "stdio.h"
#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef  int (*callBackFunc)(char* name);

int playBegin(char* name)
{
    printf("PlayBegin....\n");
    return 1;
}
int playEnd(char* name)
{
    printf("PlayEnd....\n");
    return 1;
}
int play(callBackFunc fn, char* name)
{
    return fn(name);
}
int main()
{ 
   char pName[1024] = "PlayVideo";
   //视频播放开始....
   play(playBegin,pName);//playBegin函数指针作为参数传递
    printf("--------------------\n");
   play(playEnd,pName);//playEnd函数指针作为参数传递
   return 0;
}
