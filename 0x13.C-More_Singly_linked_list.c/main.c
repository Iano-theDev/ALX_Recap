#include <stdio.h>
#include <stdlib.h>

struct data_item
{
    int value;
    struct data_item *next_data_item;
};
typedef struct data_item data_item_type;

data_item_type *createItem(int value)
{
    data_item_type *new_item = malloc(sizeof(data_item_type));
    if (new_item == NULL)
        return (NULL);
    
    new_item->value = value;
    new_item->next_data_item = NULL;
    return (new_item);
}

void print_items(data_item_type *item)
{
    while (item != NULL)
    {
        printf("%d\n", item -> value);
        item = item -> next_data_item;
    }
}

int main(void)
{
    data_item_type *first_item = NULL;

    first_item = createItem(56);
    data_item_type *second_item  = createItem(10);
    data_item_type *third_item = createItem(15);

    first_item->next_data_item = second_item;
    second_item->next_data_item = third_item;
    third_item->next_data_item = NULL;

    print_items(third_item);

    return (0);
}