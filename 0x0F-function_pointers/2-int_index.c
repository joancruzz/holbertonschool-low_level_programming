#include "function_pointers.h"

/**
 * int_index - Search for an integer
 * @array: Array to search for
 * @size: Number of elements in array
 * @cmp: Pointer to function that compares values
 * Return: Index element x or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x, result;

	if ((array == NULL ||  cmp == NULL) || size < 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		result = cmp(array[x]);
		if (result != 0)
			return (x);
	}
	return (-1);
}
