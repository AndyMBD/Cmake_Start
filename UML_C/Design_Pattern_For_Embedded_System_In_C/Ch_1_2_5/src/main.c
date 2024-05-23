#include "stdio.h"
#include "stdint.h"
#include <process.h>
#include "crt_times.h"
uint64_t rdtsc(void);
uint64_t rdtsc_2(void);
void main()
{
    
    time();
    // int64_t temp;
    // // temp=rdtsc_1();
    // temp=rdtsc_2();
    // printf("current time is %ld",temp);
    return;
}

uint64_t rdtsc(void)
{
 uint32_t low, high;
 /* Get cycle counter */
 asm("rdtsc": "=a" (low), "=d" (high)); 
 /* %eax, %edx */
 
 return (low | ((uint64_t)high << 32));
}
uint64_t rdtsc_2(void)
{
    uint64_t start, end;
    int i;
    int iters = 100;
    start = rdtsc();
    for (i = 0; i < iters; i++)
            _getpid();
    end = rdtsc();
    printf("getpid(): Average cycles = %ld\n", (end-start) / iters);

}

