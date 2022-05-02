#include <stdio.h>

typedef struct node *nodePtr;
/** 
 * struct defn and typedef below are
 * broken into two parts for clarity.
 * In our code we would usually combine the two
 */

struct node
{
    int value;
    nodePtr next;
}

typedef struct node node;

int main ()