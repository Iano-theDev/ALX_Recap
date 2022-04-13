#include "main.h"
#include "6-main.c"

/**
 * main - print every other character of a string.
 * return: string.
 */

 void puts2(char *str)
 {
     int len, i;
     len = 0;
     i = 0;

     while (str[len] != '\0')
        len++;

     len -= 1;
     for (;i <= len; i +=2)
     _putchar(str[i]);
    _putchar('\n');
 }
