#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */

/* print_array prototype */
void print_array(const int *array, size_t size);

/* Sorting algorithms prototypes */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* Doubly linked list node struct */
typedef struct listint_s
{
    int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

#endif /* SORT_H */
