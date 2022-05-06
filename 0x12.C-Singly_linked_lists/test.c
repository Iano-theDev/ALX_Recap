#include <stdio.h>
#include <stdlib.h>

typedef int iano;

int main(void)
{
    int a = 23;
    iano x = 42;

    printf("x = %d which is an integer defined as iano using typedef", x);
    return (0);
}