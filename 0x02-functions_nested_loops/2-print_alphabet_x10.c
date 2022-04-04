#include "main.h"
#include "2-main.c"

/**
 * main - print alphabet 10x in lowercase followed by anew line.
 * Return: 0 on success.
 */

 void print_alphabet_x10(void)
 {
     int i, j;
     j = 0;

     while (j < 10)
     {
         i = 97;
         while (i <= 122)
         {
             _putchar(i);
             i++;
         }
         _putchar('\n');
         j++;
     }
     return (0);
 }
