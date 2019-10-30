#include "sort.h"

/**
 * find_largest - a function that sorts an array of integers
 * in ascending order using the Counting sort algorithm
 * @array: Array to sort
 * @size: size of Array
 * Return: Void
 */
int find_largest(int *array, size_t size)
{
	size_t i;
	int largest = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > largest)
			largest = array[i];
	}
	return (largest);
}

/**
 * counting_sort - a function that sorts an array of integers
 * in ascending order using the Counting sort algorithm
 * @array: Array to sort
 * @size: size of Array
 * Return: Void
 */
void counting_sort(int *array, size_t size)
{
	int range, i;
	int *container;
	int *sorted_array;

	if (!array || size < 2)
		return;

	range = find_largest(array, size) + 1;
	container = malloc(sizeof(int) * range);
	sorted_array = malloc(sizeof(int) * size);

	/* Storing count of each character */
	for (i = 0; array[i]; ++i)
		++container[array[i]];

	/* Updating count so count[i] contains actual index count */
	for (i = 0; i < range; ++i)
	{
		container[i] += container[i - 1];
		printf("%d", container[i]);
		if (i < range - 1)
			printf(", ");
		else
			printf("\n");
	}
	/* Build sorted_array */
	for (i = 0; array[i]; ++i)
	{
		sorted_array[container[array[i]] - 1] = array[i];
		--container[array[i]];
	}

	/* Copy values from sorted_array to array */
	for (i = 0; array[i]; ++i)
		array[i] = sorted_array[i];

	free(container);
	free(sorted_array);
}
