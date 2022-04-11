#include "main.h"
#include "4-main.c"

/**
 * main - returns the value of x raised to power of y.
 * return  -----
 */

 int _pow_recursion(int x, int y)
 {
     if (y == 0)
     {
         return (1);
     }
     if (y < 0)
     {
         return (-1);
     }
     return (x * _pow_recursion(x,y - 1));
 }
