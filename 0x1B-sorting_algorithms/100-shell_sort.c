#include "sort.h"

/**
 * shell_sort - a function that sorts an array of integers
 * in ascending order using the Shell sort algorithm, using the Knuth sequence
 * @array: Array to sort
 * @size: size of Array
 * Return: Void
 */
void shell_sort(int *array, size_t size)
{
	size_t inner, outer, interval = 1;
	int value;

	if (!array || size < 2)
		return;

	while (interval <= size / 3)
		interval = interval * 3 + 1;

	while (interval > 0)
	{
		for (outer = interval; outer < size; outer++)
		{
			value = array[outer];
			inner = outer;

			while (inner > interval - 1 && array[inner - interval]
					>= value)
			{
				array[inner] = array[inner - interval];
				inner -= interval;
			}
			array[inner] = value;
		}
		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}
