#include <stdio.h>
#include <stdlib.h>

/**
 * this program is supposed to create a linked list of 5 items and
 * then print them out.
 */

struct Node{
    int data;
    struct Node* next;
};

//function to print the linked list
void printList(struct Node* n)
{
    while (n != NULL)
    {
        printf("%d, ", n->data);
        n = n->next;
    }
}

//creating the linked list with 5 nodes
int main ()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;
    struct Node* fifth = NULL;
    struct Node* sixth = NULL;

    //Allocate the 5 Nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    fifth = (struct Node*)malloc(sizeof(struct Node));
    sixth = (struct Node*)malloc(sizeof(struct Node));

    //five blocks have been allocated dynamically.

    head -> data = 6; //assign data to the first Node
    head -> next = second; //link the first Node to the second node

    second -> data = 4;
    second -> next = third; //link the second Node to the third

    third -> data = 3;
    third -> next = fourth; //link the third Node to the fourth

    fourth -> data = 2;
    fourth -> next = fifth;

    fifth -> data = 1;
    fifth -> next = sixth;

    sixth -> data = 0;
    sixth -> next = NULL;

    //now to print the list of 
    printList(head);
    return (0);
}