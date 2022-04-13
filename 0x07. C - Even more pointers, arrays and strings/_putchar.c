#include <unistd.h>

/**
 * writes character c to std out.
 * @c: the character to print out.
 * Return: 1 on success.
 * On error, return -1.
 */

 int _putchar(char c)
 {
     return (write(1, &c, 1));
 }
