#include "sort.h"

int main(void)
{
    int array1[] = {19, 48, 99, 71, 13, 23};
    size_t size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {5, 2, 9, 1, 5, 6};
    size_t size2 = sizeof(array2) / sizeof(array2[0]);

    printf("Bubble sort:\n");
    bubble_sort(array1, size1);

    printf("Insertion sort:\n");
    insertion_sort(array2, size2);

    return (0);
}
