#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element
 * @next: Pointer to the next element
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Function prototypes */

/**
 * print_list - Prints all elements of a doubly linked list
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list);

/**
 * print_array - Prints all elements of an array of integers
 * @array: Pointer to the array
 * @size: Number of elements
 */
void print_array(const int *array, size_t size);

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort
 * @array: Pointer to the array
 * @size: Number of elements
 */
void bubble_sort(int *array, size_t size);

/**
 * insertion_sort_list - Sorts a doubly linked list using Insertion sort
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list);

/**
 * selection_sort - Sorts an array of integers in ascending order using Selection sort
 * @array: Pointer to the array
 * @size: Number of elements
 */
void selection_sort(int *array, size_t size);

#endif /* SORT_H */
