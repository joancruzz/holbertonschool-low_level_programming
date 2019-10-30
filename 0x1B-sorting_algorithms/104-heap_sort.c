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
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && array[left] > array[largest])
		largest = left;
	if (right < n && array[right] > array[largest])
		largest = right;
	if (largest != i)
	{
		swap(&array[i], &array[largest]);
		print_array(array, size);
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

	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, i, size);
	for (i = size - 1; i >= 0; i--)
	{
		swap(&array[0], &array[i]);
		if (i != 0)
			print_array(array, size);
		heapify(array, i, 0, size);
	}
}
