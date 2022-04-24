#include <stdio.h>
#include "main.h"

/**
 * main - functon to create an array of chars and initializes it with a specific char.
 *Return: NULL size 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	return (0);
	p = malloc((size) *sizeof(char));
	if (*p == '\0')
	return (0);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

return (p);
}
