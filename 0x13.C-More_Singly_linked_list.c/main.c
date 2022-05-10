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

void append(data_item_type **first_item, int value)
{
    data_item_type *new_item = createItem(value);
    data_item_type *last_item;
    if (new_item == NULL)
        return;

    if (*first_item == NULL)
        *first_item = new_item;
    else
    {
        last_item = *first_item;
        while (last_item ->next_data_item != NULL)
                last_item = last_item ->next_data_item;
            
        last_item ->next_data_item = new_item;
    }
}

int main(void)
{
    data_item_type *first_item = NULL;

    append(&first_item, 56);
    append(&first_item, 13);
    append(&first_item, -1);
    append(&first_item, 58);

    print_items(first_item);

    return (0);
}