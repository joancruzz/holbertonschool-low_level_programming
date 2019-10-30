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
 * radixsort - a function that sorts an array of integers
 * in ascending order using the Radix sort algorithm
 * @array: Array to sort
 * @size: size of Array
 * @exp: digit of numbers in array
 * Return: Void
 */
void radixsort(int *array, int size, int exp)
{
	int *output; /* output array */
	int i;
	int count[10] = {0};

	output = malloc(sizeof(int) * size);
	/* Store count of occurrences in count[] */
	for (i = 0; i < size; i++)
		count[(array[i] / exp) % 10]++;

	/*
	 * Change count[i] so that count[i] now contains actual
	 *  position of this digit in output[]
	 */
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	/* Build the output array */
	for (i = size - 1; i >= 0; i--)
	{
		output[count[(array[i] / exp) % 10] - 1] = array[i];
		count[(array[i] / exp) % 10]--;
	}

	/*
	 *  Copy the output array to arr[], so that arr[] now
	 *  contains sorted numbers according to current digit
	 */
	for (i = 0; i < size; i++)
		array[i] = output[i];
	print_array(array, size);
	free(output);
}

/**
 * radix_sort - a function that sorts an array of integers
 * in ascending order using the Radix sort algorithm
 * @array: Array to sort
 * @size: size of Array
 * Return: Void
 */
void radix_sort(int *array, size_t size)
{
	int exp, largest = find_largest(array, size);

	if (!array || size < 2)
		return;
	for (exp = 1; largest / exp > 0; exp *= 10)
		radixsort(array, size, exp);
}
