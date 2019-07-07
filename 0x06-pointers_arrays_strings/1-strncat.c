#include "holberton.h"

/**
 * _strncat - Entry point
 * @dest: cat
 * @src: cat
 * @n: counter
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int i;

	while (*temp)
	{
		temp++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		;
	}
	if (src + i < dest || temp + i < src)
	{
		while (i--)
		{
			*temp = *src;
			temp++;
			src++;
		}
	}
	*temp = 0;
	return (dest);
}
