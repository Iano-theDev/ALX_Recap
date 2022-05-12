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
