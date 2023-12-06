#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO

#define ABS(x)
#if x < 0
#define ABS(x) (x * -1)
#endif

#endif
