#include "sort.h"

/**
 * bubble_sort - Sorts an array using Bubble sort
 * @array: Array to sort
 * @size: Number of elements
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int tmp;
    int swapped;

    if (!array || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                print_array(array, size);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}
