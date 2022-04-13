#include "main.h"
#include "7-main.c"

/**
 * main - print half of a string.
 * return: nothing.
 */

 void puts_half(char *str)
 {
     int len, el, unl;

     len = 0;

     while (str[len] != '\0')
     {
         len++;
     }
     if (len % 2 == 0)
        for (el = len/2; str[el] != '\0'; el++)
     {
         _putchar(str[el]);
     }
     else if (len % 2 != 0)
     {
         for (unl = (len - 1)/2; str[unl] != '\0'; unl++)
         {
             _putchar(str[unl]);
         }
     }
     _putchar('\n');
 }
