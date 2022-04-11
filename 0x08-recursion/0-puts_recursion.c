#include "main.h"
#include "0-main.c"

/**
 * prints a string followed by a new line.
 * return 0 on success and 1 on error.
 */

 void _puts_recursion(char *s)
 {
     if (*s != '\0')
     {
         _putchar(*s);
         _puts_recursion(s+1);
     }
     else
     _putchar('\n');
 }
