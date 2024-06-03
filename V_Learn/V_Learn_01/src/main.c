#include "stdint.h"
#include "stdio.h"

#define STD_ENABLE_DEBUG_SUPPORT

#if defined(STD_ENABLE_DEBUG_SUPPORT)
# define StdAssert(p,e)       if(!(p)){ ApplStdFatalError(e); }
#else
# define StdAssert(p,e)
#endif

void ApplStdFatalError(uint8_t nErrorNumber)
{
    printf(" !!! ApplStdFatalError! with Error Number %d\n", nErrorNumber);
}

void main()
{
    uint8_t assert_error_type   =   2;
    uint8_t p_type  =   0;
    printf("----------------\n");
    ApplStdFatalError(assert_error_type);
    printf("----------------\n");
    StdAssert(p_type,assert_error_type);
    // return 1;
}