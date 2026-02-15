#include "sort.h"

void insertion_sort(int *array, size_t size)
{
    size_t i, j;
    int key;

    if (!array || size < 2)
        return;

    for (i = 1; i < size; i++)
    {
        key = array[i];
        j = i;

        while (j > 0 && array[j - 1] > key)
        {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = key;
        print_array(array, size); // Holberton tələb edir
    }
}
