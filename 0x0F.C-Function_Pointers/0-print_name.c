#include <stdio.h>
#include "function_pointers.h"
#include "0-main.c"

void print_name(char *name, void (*f)(char *))
{
    if (name && f)
    {
        f(name);
    }
}