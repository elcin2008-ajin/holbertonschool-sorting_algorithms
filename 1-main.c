#include "sort.h"

/* Helper: create doubly linked list from array */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list = NULL;
    listint_t *node;
    size_t i;

    for (i = 0; i < size; i++)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return NULL;
        node->n = array[i];
        node->next = list;
        node->prev = NULL;
        if (list)
            list->prev = node;
        list = node;
    }
    return list;
}

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);
    listint_t *list;

    list = create_listint(array, n);
    if (!list)
        return 1;

    print_list(list);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    print_list(list);
    return 0;
}
