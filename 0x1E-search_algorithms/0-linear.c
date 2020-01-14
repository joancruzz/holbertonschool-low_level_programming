#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: value to search for in the array
 * Return: Value in array or -1 if value not found
 */

int linear_search(int *array, size_t size, int value)
{
unsigned int i = 0;

if (!array)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
