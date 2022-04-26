#include <stdio.h>
#include "dog.h"

/**
 * @brief 
 * 
 * @param d: pointer to struct dog
 * @param name: pointer to char dog's name
 * @param age: dog's age
 * @param owner: pointer to char dog's owner
 * return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if(d)
    {
        d -> name = name;
        d -> age = age;
        d -> owner = owner;
    }
}