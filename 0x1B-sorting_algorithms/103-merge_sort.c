#include "sort.h"

/**
 * merge - merges two subarrays of array
 * @array: Array to sort
 * @left: left most index of the array
 * @middle: middle index of the array
 * @right: right most index of the array
 * @container: space for the temporary array
 * Return: Void
 */
void merge(int *array, int left, int middle, int right, int *container)
{
	int i, j, k = 0;

	printf("Merging...\n[left]: ");
	print_array(array + left, middle - left);

	printf("[right]: ");
	print_array(array + middle, right - middle);

	i = left;
	j = middle;
	k = 0;

	while (i < middle && j < right)
	{
		if (array[i] < array[j])
			container[k++] = array[i++];
		else
			container[k++] = array[j++];
	}
	while (i < middle)
		container[k++] = array[i++];
	while (j < right)
		container[k++] = array[j++];
	for (i = left, k = 0; i < right; i++, k++)
		array[i] = container[k];
	printf("[Done]: ");
	print_array(array + left, right - left);
}

/**
 * mergesort - a function that sorts an array of integers
 * in ascending order using the Merge sort algorithm
 * @array: Array to sort
 * @left: left most index of the array
 * @right: right most index of the array
 * @container: space for the temporary array
 * Return: Void
 */
void mergesort(int *array, int left, int right, int *container)
{
	int middle;

	if (right - left > 1)
	{
		middle = left + (right - left) / 2;
		mergesort(array, left, middle, container);
		mergesort(array, middle, right, container);
		merge(array, left, middle, right, container);
	}
}

/**
 * merge_sort - a function that sorts an array of integers
 * in ascending order using the Merge sort algorithm
 * @array: Array to sort
 * @size: Size of the Array
 * Return: Void
 */
void merge_sort(int *array, size_t size)
{
	int *container;

	if (!array || size < 2)
		return;
	container = malloc(sizeof(int) * size);
	mergesort(array, 0, size, container);
	free(container);
}
