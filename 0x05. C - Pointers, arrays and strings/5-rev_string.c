#include "main.h"
#include "5-main.c"

/**
 * main - a function to reverse a string.
 * return: nothing.
 */

 void rev_string(char *s)
 {
     char *d = s;
     char n[1000];
     short x = 0;

     while (*s != '\0')
     {
         n[x] = *s;
         s++;
         x++;
     }
     x = 0;

     while (s > d)
     {
         s--;
         *s = n[x];
         x++;
     }
 }
