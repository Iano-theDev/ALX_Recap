#include <stdio.h>

typedef struct student{
    int admin;
    char name[25];
    float marks;
}student;

int main(void)
{
    student s = { 55, "Ian Kamande", 80.9};
    printf("%d %s %f", s.admin, s.name, s.marks);
    return (0);
}