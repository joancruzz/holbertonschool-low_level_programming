#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: Value in array or -1 if value not found
 */

int jump_search(int *array, size_t size, int value)
{
size_t i = 0;
size_t block = sqrt(size);
size_t x;
size_t start = 0;

if (!array)
return (-1);


while (array[i] < value)
{
printf("Value checked array[%lu] = [%u]\n", i, array[i]);
if ((i + block) >= size - 1)
{
printf("Value checked array[%lu] = [%i]\n", size - 1, array[size - 1]);
i = size - 1 + block;
break;
}
i += block;
}

start = i - block;
printf("Value found between indexes [%lu] and [%lu]\n", start, i);
for (x = start; array[x] != value; x++)
{
printf("Value checked array[%lu] = [%u]\n", x, array[x]);
if (value > array[size - 1])
{
return (-1);
}
}
printf("Value checked array[%lu] = [%u]\n", x, array[x]);
return (x);
}
