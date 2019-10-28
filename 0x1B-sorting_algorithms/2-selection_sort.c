#include "sort.h"

/**
 * swap - a function that swaps two elements in an array
 * @array: Array to sort
 * @size: Size of the Array
 * Return: Void
 */
void swap(int *first, int *second)
{
        int temp = *first;
        *first = *second;
        *second = temp;
}

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: Array to sort
 * @size: Size of the Array
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min_idx;

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size; j++)
          if (array[j] < array[min_idx])
            min_idx = j;

        swap(&array[min_idx], &array[i]);
	print_array(array, size);
    }
}
