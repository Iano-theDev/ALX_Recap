#include <stdio.h>

int main(void)
{
    int a = 1, b = 2;
    if (a&b)
        printf("The condition a&b is true while a&&b is not");
    if (a&&b)
        printf("The condition a&&b is true while a&b is not");
    return (0);
}