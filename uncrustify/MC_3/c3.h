
#ifndef _A3_H_
#define _A3_H_

typedef struct
{
    s16 hCos;
    s16 hSin;
} SinCos_Components_t;


#define Number_one                      (32767 * 32767)
#define Number_Q12_One                  (4000 * 4000)


static inline s16 F16Mul(register s16 x, register s16 y)
{
    return INT32TOF16((F16TOINT32(x) * F16TOINT32(y)) >> 15);
}

static inline SinCos_Components_t SinCos_Functions(s16 hAngle)
{
    u16 hindex;
    SinCos_Components_t Local_Components;

    /* 10 bit index computation  */
    hindex = (u16)(hAngle + 32768);
    hindex /= 64;

    switch (hindex & SIN_MASK)
    {
        case U0_90:
            Local_Components.hSin = hSin_Cos_Table[(u8)(hindex)];
            Local_Components.hCos = hSin_Cos_Table[(u8)(0xFF - (u8)(hindex))];
            break;

        case U90_180:
            Local_Components.hSin = hSin_Cos_Table[(u8)(0xFF - (u8)(hindex))];
            Local_Components.hCos = -hSin_Cos_Table[(u8)(hindex)];
            break;

        case U180_270:
            Local_Components.hSin = -hSin_Cos_Table[(u8)(hindex)];
            Local_Components.hCos = -hSin_Cos_Table[(u8)(0xFF - (u8)(hindex))];
            break;

        case U270_360:
            Local_Components.hSin = -hSin_Cos_Table[(u8)(0xFF - (u8)(hindex))];
            Local_Components.hCos = hSin_Cos_Table[(u8)(hindex)];
            break;
        default:
            break;
    }
    return (Local_Components);
}
#endif
