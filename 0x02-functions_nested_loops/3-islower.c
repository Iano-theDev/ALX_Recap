#include "main.h"
#include "3-main.c"

/**
 * main - checks for a lowercase character.
 *@c: The character in the ASCII code.
 * Returns 1, if c is lowercase, otherwise returns 0.
 */

 int _islower(int c)
 {
     if (c >= 97 && c <= 122)
        return (1);
     else
        return (0);
 }
