#include "main.h"
#include "2-main.c"

/**
 * main - returns the length of a string.
 * return: length of the string.
 */

 int _strlen(char *s)
 {
     int l;

     l = 0;

     while (*s != '\0')
     {
         s++;
         l++;
     }
     return (l);
 }
