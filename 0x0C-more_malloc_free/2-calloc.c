#include "holberton.h"
#include <stdlib.h>

/**
  * _calloc - Allocate memory for an array
  * @nmemb: Element of array
  * @size: Size of array in bytes
  * Return: array
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int count;
	char *array;

	if (nmemb == 0 || size == 0)
		return ('\0');

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (count = 0; count < (nmemb * size); count++)
		array[count] = 0;

	return (array);
}
