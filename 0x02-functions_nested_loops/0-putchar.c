#include "main.h"

/* main - print _putchar
 * Description: add a new line after printing.
 * Return: 0 on success
 */

 int main(void)
 {
     char c[9] = "_putchar";
     int i = 0;
     while(i<8)
     {
        _putchar(c[i]);
        i++;
     }
     _putchar('\n');
     return (0);
 }
