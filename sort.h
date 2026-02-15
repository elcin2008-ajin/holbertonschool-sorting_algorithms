#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* prototiplər */
void print_array(const int *array, size_t size);
void print_list(const int *list, size_t size); // sadə array print
void bubble_sort(int *array, size_t size);
void insertion_sort(int *array, size_t size);

#endif
