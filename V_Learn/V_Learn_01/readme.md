# Learn C assert
1. #define STD_ENABLE_DEBUG_SUPPORT
```c
// #define STD_ENABLE_DEBUG_SUPPORT
#if defined(STD_ENABLE_DEBUG_SUPPORT)
# define StdAssert(p,e)       if(!(p)){ ApplStdFatalError(e); }
#else
# define StdAssert(p,e)
#endif
```
if the STD_ENABLE_DEBUG_SUPPORT define, the StdAssert will be execute, else ,the StdAssert is an empty function,it cannot execute

2. execute result   
 2.1. // #define STD_ENABLE_DEBUG_SUPPORT
```c
----------------
 !!! ApplStdFatalError! with Error Number 2
----------------
```
 2.2. #define STD_ENABLE_DEBUG_SUPPORT
```c
----------------
 !!! ApplStdFatalError! with Error Number 2
----------------
 !!! ApplStdFatalError! with Error Number 2
```