#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Function to print the elements of a listint_t list
 * main - check the code
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node 
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;


//function declaration
size_t print_listint(const listint_t *h);


int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc (sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new -> n = 9;
    new -> next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements \n", n);
    free (new);
    return (0);
}

//function definitions
size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h)
    {
        printf("%d \n", h -> n);
        h = h-> next;
        count++;
    }
    return (count);
}