#include <stdlib.h>
#include <stdio.h>
#include "stdint.h"
#define CHECKERROR (1 << 1)
typedef struct _statusBits
{
    unsigned enable : 1;
    unsigned errorStatus : 1;
    unsigned motorSpeed : 4;
    unsigned LEDColor : 2;
} statusBits;

int main()
{
    statusBits status;
    printf("size = %d\n", sizeof(status));
    status.enable = 1;
    status.errorStatus = 0;
    status.motorSpeed = 3;
    status.LEDColor = 2;

    if (status.enable)
        printf("Enabled\n");
    else
        printf("Disabled\n");

    if (status.errorStatus)
        printf("ERROR!\n");
    else
        printf("No error\n");

    printf("Motor speed %d\n", status.motorSpeed);
    printf("Color %d\n", status.LEDColor);
    return 0;
};