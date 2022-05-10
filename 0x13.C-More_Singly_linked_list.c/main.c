#include <stdio.h>
#include <stdlib.h>

struct data_item
{
    int value;
    struct data_item *next_data_item;
};
typedef struct data_item data_item_type;

int main(void)
{
    data_item_type first_item = {.value = 10, .next_data_item = NULL};
    data_item_type second_item = {.value = 5, .next_data_item = NULL};
    data_item_type third_item = {.value = 3, .next_data_item = NULL};

    first_item.next_data_item = &second_item;
    second_item.next_data_item = &third_item;
    third_item.next_data_item = NULL;

    data_item_type *current_item = &first_item;

    while (current_item != NULL)
    {
        printf("%d\n", current_item -> value);
        current_item = current_item -> next_data_item;
    }

    return (0);
}