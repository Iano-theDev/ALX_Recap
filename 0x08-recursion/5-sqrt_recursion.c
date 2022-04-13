#include "main.h"
#include "5-main.c"

/**
 * main - calculate the natural square of a number"
 * Return: square root.
 */

 int _sqrt_recursion(int n)
 {
     return (_sqrt(n, 1));
 }

 /**
 * _sqrt - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */

 int _sqrt(int n, int i)
 {
     if (n < 0)
     {
         return (-1);
     }
     if ((i*i) > n)
     {
         return(-1);
     }
     if ((i*i) == n)
     {
         return (i);
     }
     return (_sqrt(n, i + 1));
 }
