#include <stdio.h>
#define PI 3.14

int main()
{
    int r;
    double circle_area;
    printf("Enter the radius of your circle: \n");
    scanf("%d", &r);

    circle_area = PI * (r * r);
    printf("Area of the circle is: %f", circle_area);
    return (0);
}