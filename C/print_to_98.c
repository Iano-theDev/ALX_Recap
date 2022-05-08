#include <stdio.h>
#include <stdlib.h>

void print_to_98(int n)
{
    while (n != 98)
    {
        if (n > 98)
        {
            printf("%d, ", n);
            n--;
        }
        else if (n < 98)
        {
            printf("%d, ", n);
            n++;
        }
    }
    printf("98\n");
}

int main (void)
{
    print_to_98(98);
    print_to_98(-11);
    return (0);
}