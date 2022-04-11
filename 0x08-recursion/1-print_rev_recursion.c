#include "main.h"
#include "1-main.c"

/**
 * print a string in reverse.
 * @s: pointer to string
 * return nothing.
 */

 void _print_rev_recursion(char *s)
 {
     int n = 0;

     if (*s)
     {
        _print_rev_recursion(s+1);
        _putchar(*s);
     }
 }
