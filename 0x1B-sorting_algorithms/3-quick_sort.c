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
 * lomuto - a function that returns the pivot index
 * using the Lomuto partition scheme
 * @array: Array of integers
 * @size: size of the Array
 * @low: lowest index of the Array
 * @high: highest index of the Array
 * Return: index of the pivot number
 */
int lomuto(int *array, size_t size, int low, int high)
{
	int j, i = low - 1;
	int pivot = array[high];

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[j], &array[i]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quickswap_l - a helper function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: Array of integers
 * @size: size of the Array
 * @low: lowest index of the array
 * @high: highest index of the array
 * Return: Void
 */
void quickswap_l(int *array, size_t size, int low, int high)
{
	int pivot = 0;

	if (low < high)
	{
		pivot = lomuto(array, size, low, high);
		quickswap_l(array, size, low, pivot - 1);
		quickswap_l(array, size, pivot + 1, high);
	}
}

/**
 * quick_sort - a function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: Array of integers
 * @size: size of the Array
 * Return: index of the pivot number
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quickswap_l(array, size, 0, size - 1);
}
