#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr;
/** 
 * struct defn and typedef below are
 * broken into two parts for clarity.
 * In our code we would usually combine the two
 */

struct node
{
    int data;
    nodePtr next;
};


typedef struct node node;

int main (int argc, const char * argv[])
{
    nodePtr first = NULL;
    first = malloc(sizeof (node));
    first ->next = NULL;

    //node firstNode;
    //firstNode = *first;

    first -> data = 61;

   // first -> next = malloc (sizeof(node));
   // first -> next = NULL;
   // first -> next -> data -> 62;

   nodePtr temp;
   temp = malloc (sizeof(node));
   temp -> next = first;
   first = temp;

    printf ("Hello World!\n");
    return (0);
}