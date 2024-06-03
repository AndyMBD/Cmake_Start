#include <stdlib.h>
#include <stdio.h>
#include "TMDQueue.h"
#define TURN_OFF (0x00)
#define INITIALIZE (0x61)
#define RUN (0x69)
#define CHECK_ERROR (0x02)
#define DEVICE_ADDRESS (0x01FFAFD0)

#define CHECKERROR (1 << 1)
typedef struct _statusBits
{
    unsigned enable : 1;
    unsigned errorStatus : 1;
    unsigned motorSpeed : 4;
    unsigned LEDColor : 2;
} statusBits;

void emergencyShutDown(void);
int CH_3_1_1();
void CH_3_1_2();


int main()
{
    printf("CH_3_1_1 return %d\n",CH_3_1_1());
    CH_3_1_2();
    TMD_Queue_Handle();
}

void emergencyShutDown(void)
{
    printf("OMG We’re all gonna die!\n");
}
int CH_3_1_1()
{
    unsigned char *pDevice;
    // pDevice = (unsigned char *)DEVICE_ADDRESS; // pt to device
    // for testing you can replace the above line with
    printf("*---------CH3_1_1 Start----------------------*\n");
    pDevice = malloc(1);
    *pDevice = 0xff; // start with all bits on
    printf("Device bits %X\n", *pDevice);

    *pDevice = *pDevice & INITIALIZE; // and the bits into
    printf("Device bits %X\n", *pDevice);

    if (*pDevice & CHECK_ERROR)
    { // system fail bit on?
        emergencyShutDown();
        abort();
    }
    else
    {
        *pDevice = *pDevice & RUN;
        printf("Device bits % X\n", *pDevice);
    };
    printf("*---------CH3_1_1 End----------------------*\n");
    return 0;
}
void CH_3_1_2()
{
    statusBits status;
    printf("*---------CH3_1_2 Start----------------------*\n");
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
    printf("*---------CH3_1_2 End----------------------*\n");
}
void TMD_Queue_Handle()
{
    TMDQueue TMDQueue_t1={
        .head=10,
        .size=20
    };
    printf("*---------TMDQueue_t1 Start----------------------*\n");
    printf("TMDQueue_t1 head %d\n", TMDQueue_t1.head);
    printf("TMDQueue_t1 size %d\n", TMDQueue_t1.size);
    printf("*---------TMDQueue_t1 End----------------------*\n");
}