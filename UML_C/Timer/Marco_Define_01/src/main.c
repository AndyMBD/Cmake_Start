// crt_times.c
// compile with: /W3
// This program demonstrates these time and date functions:
//      time         _ftime    ctime_s     asctime_s
//      _localtime64_s    _gmtime64_s    mktime    _tzset
//      _strtime_s     _strdate_s  strftime
//
// Also the global variable:
//      _tzname
//
// Turn off deprecated unsafe CRT function warnings
#define _CRT_SECURE_NO_WARNINGS 1
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/timeb.h>
#include <string.h>
/* connect x,y */
#define A(x) Var_##x
#define Var_10 10
#define cat(a,b)  a##b
/* change x to char This is C++ defination, not C*/
// #define ToChar(x) #@x
/* change x to string */
#define ToString(x) #x

int aabbccdd=10;
static int aa_bb_cc_dd=10;
int main()
{
    int abcd=1;
    printf("%d\n",A(10));
    printf("%d\n",cat(ab,cd));
    // printf("%c\n",ToChar(a));
    printf("%s\n",ToString(abc));
    // printf("%d\n",aabbccdd);
    // printf("%d\n",aa_bb_cc_dd);
    // printf("%d\n",aabbccdd);

}