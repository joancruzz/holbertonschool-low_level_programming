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
 * hoare - a function that creates pivots based on the hoare method
 * @array: Array to be sorted
 * @size: size of the Array
 * @low: low index
 * @high: high index
 * Return: returns the new pivot
 */
int hoare(int *array, size_t size, int low, int high)
{
	int pivot = array[low];
	int i = low - 1, j = high + 1;
  
	while (1)
	{
		/* Find leftmost element greater than
		   or equal to pivot */
		do
		{
			i++;
		}
		while (array[i] < pivot);

		/* Find rightmost element smaller than
		   or equal to pivot */
		do
		{
			j--;
		}
		while (array[j] > pivot);

		/* If two pointers met. */
		if (i >= j)
			return (j);
		swap(&array[i], &array[j]);
		print_array(array, size);
	}
}

/**
 * quickswap_h - a helper function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: Array of integers
 * @size: size of the Array
 * @low: lowest index of the array
 * @high: highest index of the array
 * Return: Void
 */
void quickswap_h(int *array, size_t size, int low, int high)
{
	int pivot = 0;

	if (low < high)
	{
		pivot = hoare(array, size, low, high);
		quickswap_h(array, size, low, pivot);
		quickswap_h(array, size, pivot + 1, high);
	}
}

/**
 * quick_sort_hoare - a function that sorts an array of integers
 * in ascending order using the Quick sort algorithm with Hoare partition scheme
 * @array: Array of integers
 * @size: size of the Array
 * Return: Void
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array)
		return;
	quickswap_h(array, size, 0, size - 1);
}
