#include <stdio.h>

struct Computer {
    char *name;
    char *brand;
};

typedef struct Computer Computer;

typedef struct Computer {
    char *name;
    char *brand;
}Computer;