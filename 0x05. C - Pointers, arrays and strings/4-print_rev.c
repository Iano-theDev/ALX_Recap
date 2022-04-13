#include "main.h"
#include "4-main.c"

/**
 * main - print a string in reverse.
 * return: nothing.
 */

 void print_rev(char *s)
 {
     int n;

     n = 0;

     while (*s != '\0')
     {
         s++;
         n++;
     }
     while (n > 0)
     {
         s--;
         _putchar(*s);
         n--;
     }
     _putchar('\n');
 }
