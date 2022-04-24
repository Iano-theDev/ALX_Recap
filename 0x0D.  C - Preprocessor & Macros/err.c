#include <stdio.h>

int main()
{
#if VER == 1
    printf("This is for version1\n");
#elif VER == 2
    printf("This is for version2\n");
#elif VER == 3
    printf("This is for version3\n");
#elif VER == 4
    printf("This is for version4\n");
#else
    #error "Please provide the macro VER"
#endif
}