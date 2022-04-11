#include "main.h"
#include "2-main.c"

/**
 * print the length of a string.
 * return _strlen_recursion
 */

 int _strlen_recursion(char *s)
 {
     if (!*s)
     {
         return (0);
     }
     return (1 + _strlen_recursion(++s));
 }
