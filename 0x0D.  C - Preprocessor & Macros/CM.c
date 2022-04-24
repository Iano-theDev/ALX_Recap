#include <stdio.h>

#define VERSION 7

int main()
{
#if VERSION >= 1
    printf("This is for Version 1\n");
#endif
#if VERSION >= 2
    printf("This is for Version 2\n");
#endif
#if VERSION >= 3
    printf("This is for Version 3\n");
#endif
#if VERSION >= 4
    printf("This is for Version 4\n");
#endif
#if VERSION >= 5
    printf("This is for Version 5\n");
#endif
}