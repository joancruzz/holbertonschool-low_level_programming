#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: string to coopy to another string
 * Return: new string
 */


char *_strdup(char *str)
{
	unsigned int size;
	char *copy = NULL;
	unsigned int i;

	if (str != NULL)
	{
		for (size = 0; str[size];)
			size++;

		copy = malloc(size * sizeof(char) + 1);
		if (copy == NULL)
		{
			return (NULL);
		}
	
		for (i = 0; i < size; i++)
		{
			copy[i] = str[i];
		}

		copy[i] = '\0';

		return (copy);

	}
	return (NULL);
}

