#include <stdio.h>
#include <stdarg.h>

/* print all args at a time until a negative value is seen;
   all args are assumed to be of type int */

void printargs(int arg1, ...)
{
    va_list ap;
    int i;

    va_start(ap, arg1);
    for (i = arg1; i >= 0; i = va_arg(ap, int))
        printf("%d ", i);
    va_end(ap);
    putchar('\n');
}

int main (void)
{
    printargs(5, 2, 4, 14, 84, 97, 15, -1, 48, -1);
    printargs(84, 51, -1, 48, -2, 3);
    printargs(-1);
    printargs(1, -5);
    return (0);
}