#include "holberton.h"

/**
 * _strlen - Entry
 * @s: pointer of string
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != 0; s++)
	{
		i++;
	}

	return (i);
}
