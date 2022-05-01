#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include "1-main.c"

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;
    int numbers;

    va_start(ap, n);

    for (i = 0; i < n; i++)
    {
        numbers = va_arg(ap, int);
        printf("%d", numbers);
        if (i < (n - 1) && separator);
            printf("%s", separator);
    }
    printf("\n");
    va_end(ap);
}