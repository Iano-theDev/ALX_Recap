#include <stdio.h>
#include <stdlib.h>

struct {
    char *engine;
    char *fuel_type;
    int sitting_cap;
    float milage;
}car1, car2;

int main()
{
    car1.engine = "DDis 190 Engine";
    car2.engine = "1.2 L Kappa Dual VTVT";
    printf("car1 engine is: %s\n", car1.engine);
    printf("car2 engine is: %s\n", car2.engine);
}