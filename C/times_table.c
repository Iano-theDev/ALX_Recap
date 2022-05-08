#include <stdio.h>
#include <stdlib.h>

void print_times_table(int n)
{
    int i, j;
    if (n >= 0 && n < 16)
    {
        for (i = 0; i <= n; i++)
        {
            j = i * n;
            printf("%d, ", j);
        }
    }
}

int main(void)
{
    print_times_table(3);
    printf("\n");
    print_times_table(5);
    printf("\n");
    print_times_table(98);
    printf("\n");
    print_times_table(12);
    return (0);
}