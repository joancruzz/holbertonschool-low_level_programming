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
 * heapify - a function that sorts an array of integers
 * in ascending order using the Heap sort algorithm
 * @array: Array to sort
 * @n: Size of the heap
 * @i: Index of the array
 * @size: Size of the Array
 * Return: Void
 */
void heapify(int *array, int n, int i, size_t size)
{
	int largest = i; /* Initialize largest as root */
	int left = 2 * i + 1; /* left = 2*i + 1 */
	int right = 2 * i + 2; /* right = 2*i + 2 */

	/* If left child is larger than root */
	if (left < n && array[left] > array[largest])
		largest = left;

	/* If right child is larger than largest so far */
	if (right < n && array[right] > array[largest])
		largest = right;

	/* If largest is not root */
	if (largest != i)
	{
		swap(&array[i], &array[largest]);
		print_array(array, size);
		/* Recursively heapify the affected sub-tree */
		heapify(array, n, largest, size);
	}
}

/**
 * heap_sort - a function that sorts an array of integers
 * in ascending order using the Heap sort algorithm
 * @array: Array to sort
 * @size: Size of the Array
 * Return: Void
 */
void heap_sort(int *array, size_t size)
{
	int i;
	/* Build heap (rearrange array) */
	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, i, size);

	/* One by one extract an element from heap */
	for (i = size - 1; i >= 0; i--)
	{
		/* Move current root to end */
		swap(&array[0], &array[i]);
		if (i != 0)
			print_array(array, size);
		/* call max heapify on the reduced heap */
		heapify(array, i, 0, size);
	}
}
