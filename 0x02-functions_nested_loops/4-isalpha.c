#include "main.h"
#include "4-main.c"

/**
 * main - checks if @c is an alphabet.
 * @c: a character in the ASCII table.
 * Return 1, if c is an alphabet, otherwise return 0.
 */

 int _isalpha(int c)
 {
     if ( (c>=97 && c <= 122) || (c>=65 && c<=90))
        return (1);
     else
        return (0);
 }
