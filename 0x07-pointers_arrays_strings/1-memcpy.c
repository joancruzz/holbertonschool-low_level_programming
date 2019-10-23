#include "holberton.h"

/**
 *  _memcpy - copy memory area
 * @dest: pointer for memory area dest
 * @src: pointer for memory area src
 * @n: variable to copy bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
