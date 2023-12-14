
#include "a3.h"

s32 App2CoreCurTrans(float val)
{
    s32 ax;
    ax = (s32)((float)(RSHUNT * val * AMPLIFICATION_GAIN) * 9098.0);
    return (ax);
}

s32 App2CoreVolTrans(float val)
{
    s32 ax;
    ax = (s32)((VOLTAGE_SHUNT_RATIO * 32752.0 * val) / 3.6);
    return (ax);
}


