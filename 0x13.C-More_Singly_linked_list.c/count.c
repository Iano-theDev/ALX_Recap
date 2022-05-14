#include <stdio.h>
#include <stdlib.h>

/* Link list node */
struct Node
{
    int data;
    struct Node* next;
};

/* Pointer to pointer to the head of list & an int, 
push a new node on the front of the list. */
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    //put in the data
    new_node->data = new_data;

    //link thr old list off the new node
    new_node->next = (*head_ref);

    //move the head to point o the new node
    (*head_ref) = new_node;
}

//Counts no. of nodes in the linked list
int getCount(struct Node* head)
{
    int count = 0;//initialize count
    struct Node* current = head;//Initialize current
    while (current != NULL)
    {
        count++;
        current = current -> next;
    }
    return count;
}

//Driver program to test count function
int main()
{
    //start with the empty list
    struct Node* head = NULL;

    //Use push to construct the below list
    //1->2->1->3->1
    push(&head, 1);
    push()
}