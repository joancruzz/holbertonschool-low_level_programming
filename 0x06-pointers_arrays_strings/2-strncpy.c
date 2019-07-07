#include "holberton.h"

/**
 * _strncpy - Entry point
 * @dest: cat
 * @src: cat
 * @n: counter
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *temp = dest;

	for (i = 0; i < n && *src != 0; i++)
	{
		*temp++ = *src++;
	}
	for (; i < n; i++)
	{
		*temp++ = 0;
	}
	return (dest);
}
