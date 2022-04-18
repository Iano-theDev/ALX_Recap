#include <stdio.h>
#include <stdlib.h>

void m(int n0, int n1, int n2)
{
	int *t;
	int sum;

	t = malloc(sizeof(*t) *3);
	t[0] = n0;
	t[1] = n1;
	t[3] = n2;

	sum = t[0] + t[1] + t[2];

	printf("%d + %d + %d = %d\n", t[0], t[1], t[3], sum);
	free(t);
}

int main(void)
{
	m(98, 402, -1024);
	return (0);
}

