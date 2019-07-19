#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - Functoin that reates an array of integers
 * @min: First number of array
 * @max: Last number of array
 * Return: Pointer to new array
 */

int *array_range(int min, int max)
{
	int *array;
	int *p;
	int i;
	int total;

	if (min > max)
		return (NULL);

	total = max - min;

	array = malloc(sizeof(int) * ((max - min) + 1));
	p = array;

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i <= total; i++)
		array[i] = min++;

	return (p);
}
