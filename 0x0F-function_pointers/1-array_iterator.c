#include "function_pointers.h"
/**
 * array_iterator - Function that executes a function on each element of array
 * @array: Pointer of array
 * @size: Size of the integer array
 * @action: Pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
