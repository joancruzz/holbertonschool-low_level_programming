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

if (!array)
return (-1);


while (array[i] < value)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
i += block;
if (i >= size)
{
break;
}
}
printf("Value found between indexes [%ld] and [%ld]\n", i - block, i);
i -= block;

while (array[i] < value)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
i++;
if (i == size)
{
return (-1);
}
}

if (array[i] == value)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
return (i);
}
return (-1);
}
