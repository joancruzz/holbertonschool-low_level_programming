#include "holberton.h"

/**
 * _memset - Entry
 * @s: pointer to array
 * @b: constant byte
 * @n: counter of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int x;

	for (x = 0; x < n; x++)
		s[x]  = b;

	return (s);
}
