#include <stdio.h>
#include <stdarg.h>

int sum(int arg1, ...)
{
    va_list ap;
    int i, add;

    va_start (ap, arg1);

    add = 0;
    for (i = 0; i < arg1; i++)
        add += (va_arg (ap, int));
    va_end(ap);
    return add;
}

int main (void)
{
    printf("%d \n", sum(4, 4, 6, 78, 67));
    printf("%d ", sum(4, 2, 2, 5, 30));
    return (0);
}