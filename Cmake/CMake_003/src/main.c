#include "stdio.h"
#include "stdint.h"
#include "./c_dll/c_dll.h"
#include "./math/math_utils.h"
// void my_add_1(uint8_t num)
// {
//     int64_t result = 0;

//     for (int64_t i=1; i<=num; i++)
//     {
//         result += i;
//     }
//     printf("From 1 to %d add result is %ld\n",num,result);
// }

void main()
{
    // uint8_t i=10;
    uint16_t i=10;
    // my_add(i);
    // uint16_t j=10;
    int16_t j=0;
    for ( i = 0; i < MATH_SINE_LUT_LENGTH; i++)
    {
        j=math_svm_waveform_unsafe (i);
        printf("math_svm_value_LUT[%d] is %d\n",i,j);
        // math_svm_waveform_unsafe ( i );
        // printf("math_svm_value_LUT[%d] is %d\n",i,math_svm_waveform_unsafe ( i ));
        // math_svm_value_LUT
        // math_svm_waveform_unsafe
    }
    
    // my_add_1(i_1);
}
// void main()
// {
//     uint8_t num=10;
// int64_t result = 0;

// for (int64_t i=1; i<=num; i++){
//     result += i;
// }
// printf("from 1 to %d add result is %ld\n",num,result);
// }