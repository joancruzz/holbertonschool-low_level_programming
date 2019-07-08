#include "holberton.h"

/**
 * _strcmp  - Entry point
 * @s1: compare to s2
 * @s2: compare to s1
 *Return: 0x
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;

		if (*s1 == '\0')

			return (0);
	}
	return (*s1 - *s2);
}
