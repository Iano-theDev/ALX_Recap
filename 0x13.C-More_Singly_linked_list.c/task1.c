#include <stdio.h>
#include <stdlib.h>

void PrintList(NodePtr head);


struct Node{
    int value;
    Node *next;
};
typedef Node* NodePtr;

int InsertNode(NodePtr* ptrHead, int value)
{
    print("Insert Node: %d", value);
    NodePtr tempPtr = (NodePtr)malloc(sizeof(Node));
    if(!tempPtr)
    return (-1);

    tempPtr-> value = value;
    tempPtr-> next = *ptrHead;
    *ptrHead = tempPtr;

    return (1);
}

void PrintList(NodePtr head)
{
    while(head)
    {
        printf("Value %d \n", head->value);
        head = head -> next;
    }
}

int main ()
{
    NodePtr head = NULL;
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++)
    {
        InsertNode(&head, arr[i]);
    }
    return (0);
}