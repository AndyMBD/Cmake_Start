#include "stdio.h"
#include "stdint.h"
#define SIN_MASK  0x0300
#define U0_90     0x0200
#define U90_180   0x0300
#define U180_270  0x0000
#define U270_360  0x0100
int16_t SinCos_Functions(int16_t hAngle);
void main()
{
    uint16_t hAngle;
    // for ( hAngle = 0; hAngle < 32768; hAngle++)
    // {
    //     SinCos_Functions(hAngle);
    // }
    hAngle = 0x0000;
    printf("hAngle=0x%x\n",hAngle);
    SinCos_Functions(hAngle);

    hAngle = 0x3FFF;
    printf("hAngle=0x%x\n",hAngle);
    SinCos_Functions(hAngle);

    hAngle = 0x4FFF;
    printf("hAngle=0x%x\n",hAngle);
    SinCos_Functions(hAngle);

    hAngle = 0x8FFF;
    printf("hAngle=0x%x\n",hAngle);
    SinCos_Functions(hAngle);

    hAngle = 0xbFFF;
    printf("hAngle=0x%x\n",hAngle);
    SinCos_Functions(hAngle);
    
    hAngle = 0xFFFF;
    printf("hAngle=0x%x\n",hAngle);
    SinCos_Functions(hAngle);
    hAngle=32768;
    
    // hAngle = 32768;
    // printf("hAngle=0x%x\n",hAngle);
    // SinCos_Functions(hAngle);

    // hAngle = -32765;
    // printf("hAngle=0x%x\n",hAngle);
    // SinCos_Functions(hAngle);
    
    

}
int16_t SinCos_Functions(int16_t hAngle)
{
  uint16_t hindex;
//   SinCos_Components_t Local_Components;
  
  /* 10 bit index computation  */  
  hindex = (uint16_t)(hAngle + 32768);  
  hindex /= 64;      
  
  switch (hindex & SIN_MASK) 
  {
  case U0_90:
    // Local_Components.hSin = hSin_Cos_Table[(uint8_t)(hindex)];
    // Local_Components.hCos = hSin_Cos_Table[(uint8_t)(0xFF-(u8)(hindex))];
    printf("hindex =0x%x\n",hindex);
    printf("Session U0_90\n");
    break;
  
  case U90_180:  
    //  Local_Components.hSin = hSin_Cos_Table[(uint8_t)(0xFF-(uint8_t)(hindex))];
    //  Local_Components.hCos = -hSin_Cos_Table[(uint8_t)(hindex)];
     printf("hindex =%x\n",hindex);
     printf("Session U90_180 \n");
    break;
  
  case U180_270:
    //  Local_Components.hSin = -hSin_Cos_Table[(uint8_t)(hindex)];
    //  Local_Components.hCos = -hSin_Cos_Table[(uint8_t)(0xFF-(uint8_t)(hindex))];
     printf("hindex =0x%x\n",hindex);
     printf("Session U180_270 \n");
    break;
  
  case U270_360:
    //  Local_Components.hSin =  -hSin_Cos_Table[(uint8_t)(0xFF-(uint8_t)(hindex))];
    //  Local_Components.hCos =  hSin_Cos_Table[(uint8_t)(hindex)]; 
     printf("hindex =0x%x\n",hindex);
     printf("Session U270_360 \n");
    break;
  default:
    break;
  }
//   return (0);
printf("----------------------- \n");
}