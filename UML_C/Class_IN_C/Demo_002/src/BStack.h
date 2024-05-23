#ifndef ORG_PVV_HAKONHAL_UTILS_BSTACK_H
#define ORG_PVV_HAKONHAL_UTILS_BSTACK_H

#include "org/somewhere/someone/Stack.h"

struct org_pvv_hakonhal_utils_BStack
{

    struct org_somewhere_someone_Stack org_somewhere_someone_Stack;
};

extern const struct org_pvv_hakonhal_utils_BStackClass
{
    struct org_pvv_hakonhal_utils_BStack (*new)(void);
} org_pvv_hakonhal_utils_BStack;

#endif