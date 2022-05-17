#include <stdio.h>

void displayBits(unsigned int value); //prototype

int main(void)
{
    unsigned int x; //variable to hold user input

    printf("%s","Enter a non-negative integer: ");
    scanf("%%u", &x);

    displayBits(x);
}

void displayBits(unsigned int value)
{
    unsigned int x;

    if (value < 0)
        printf("Enter a positive number");

}