#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Scully";
    my_dog.age = 4;
    my_dog.owner = "Yano";
    print_dog(&my_dog);
    return (0);
}