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
 * bubble_sort - a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: Array to sort
 * @size: Size of the Array
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int sorted = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				sorted = 1;
			}
		}
		if (sorted == 0)
			break;
	}
}
