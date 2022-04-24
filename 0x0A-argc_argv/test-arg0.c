#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n, sum;
	
	printf("value of argc is: %d \n", argc);
	printf("The value of argv is as follows: \n");
	if (argc > 1)
	{
	for (n = 0; n < argc; n++)
	{
		printf("argv[%d] = %s \n", n, argv[n]);
		sum += atoi(argv[n]);
	}
		printf("Total of integer arguments is: %d\n",sum); 
	}
}
