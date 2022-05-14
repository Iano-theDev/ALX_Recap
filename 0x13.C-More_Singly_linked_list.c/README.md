This is C language recap on:
More-Singly linked lists.<br>
<hr>
<h3>Adding a node at the front of the linked list.</h3><br>

creating data items manually. 
Updated functions to create and link nodes. va_end<br>
linked list is a list of items called nodes.<br>
Nodes have two parts, the value part and the link part.<br>
The value part is used to store data while the link part is used as a pointer to store the address of the next node<br>
The value part of the node can be either a basic data type like an int or a string OR some other data-type like structure.<br>
The last node has the link part as NULL to signify the end of the linked list.
...<br>
There are many types of linked lists, the main difference among them being how their nodes refer to each other:<br>
    1.Singly linked lists - Each node has a ref to the next node in the linked list except the last node.
    2.Doubly linked lists - The nodes in this type of linked list has reference to both previous and the next node
                            in the list.
    3.Circular Linked lists - Similar to singly linked lists only that the last node is linked to the first node ie.
                            the link part of the last node contains the address of the first node.

<h4>Singly Linked Lists</h4>
<b>Note: Any program that is likely to change the head pointer is to be passed as a double pointer</b><br>
Basic operation of a linked list requires traversing the linked list. The various operations that we can perform on linked list many of these operations.:<br>
1.Insert an element in the list, this operation require list traversal.
2.Print various elements of the list.
3.Search an element in the list.
4.Delete  an element in the list.
5.Reverse a linked list.<br>

You cannot use  Head to traverse (travel across or through) a linked list because if we use the head, then we lose the nodes of the list. We have to use another pointer variable of some data-type as the head.

<b>Inserting Elements to the list</b>
```rb
struct Node {
    int value;
    Node *next;
};
typedef Node *NodePtr;

int InsertNode(NodePtr* ptrHead, int value)
{
    printf("Insert Node: %d", value);
    NodePtr tempPtr = (NodePtr) malloc (sizeof(Node));
    if(!tempPtr)
    return -1;
    tempPtr-> value = value;
    tempPtr-> next =*prtHead;
    *ptrHead = tempPtr;
    return 1;
}

```
<b>Traversing through a linked list</b></br>
The following is a function to print various nodes of a linked linked list(singly):
```rb
void PrintList(NodePtr head)
{
    while(head)
    {
        printf("value %d \n", head-> value);
        head=head->next;
    }
}
```
```rb
-the  program takes the head of the list as an input argument.
-checks if the head is NULL using a while loop.
-it prints the value stored as the value of the current node.
-//head=head-> next// increments the head pointer so that it points to the next element of the list and the process repeats itself for the next node.
```

