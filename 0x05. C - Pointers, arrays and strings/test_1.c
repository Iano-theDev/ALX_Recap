#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2)
{
    //local variable declaration
    int result;

    if (num1 > num2)
    result = num1;

    else if (num1 < num2)
    result = num2;

    else
    result = 0;

    return (result);
}

int main (void)
{
    int a = 45, b = 45;
    int maxVal;

    maxVal = max(a, b);
    printf("Max value: %d\n", maxVal);
}