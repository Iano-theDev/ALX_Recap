#include "main.h"
#include "1-main.c"

/**
 * main - swaps the values of two integers.
 * return: nothing.
 */

 void swap_int(int *a, int *b)
 {
     int swap = *a;
     *a = *b;
     *b = swap;
 }
