#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

//Program to create a linked list with 3 Nodes.

int main ()
{
    struct Node* head = NULL;
    struct Node* second  = NULL;
    struct Node* third = NULL;

    //Allocate 3 nodes in the heap.
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    /* Three blocks have been allocated dynamically.
     * we have pointers to these three blocks as head, second and third */

    head -> data = 1; //assign data in the firs node.
    head -> next = second; // Link the first node to the second node.

    second -> data = 2; //assign data to the second node.
    second -> next = third; //Link the second node to the third node.

    third -> data = 3; //assign data to the third node.
    third -> next = NULL;// the third block is made NULL to indicate that the
                        //Linked List is terminated here.
    //Now the linked lis is ready.

    return (0);
}