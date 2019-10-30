#include "sort.h"

/**
 * swap - a function that swaps two elements in an array
 * @first: first element
 * @second: second element
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

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;
		if (i != min_idx)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}
