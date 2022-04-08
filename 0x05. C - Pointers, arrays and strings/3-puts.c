#include "main.h"
#include "3-main.c"

/**
 * main - print a string followed by a new line.
 * return: nothing.
 */

 void _puts(char *str)
 {

     while (*str != '\0')
     {
         _putchar(*str);
         str++;
     }
     _putchar('\n');
 }
