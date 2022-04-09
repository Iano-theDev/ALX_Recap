#include "main.h"
#include "8-main.c"

/**
 * main - print n elements of an array.
 * return: n
 */

 void print_array(int *a, int n)
 {
     short c = 0;

     while (n-- > 0)
     {
         printf("%d", a[c++]);
        if (n != 0)
        {
            printf(", ");
        }
     }
     printf("\n");
 }
