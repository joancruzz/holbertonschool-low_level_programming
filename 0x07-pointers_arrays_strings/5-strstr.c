#include "holberton.h"
/**
 * _strstr - Locate a substring
 * @haystack: string
 * @needle: substring
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	for (x = 0; needle[x] != 0; x++)
	{
		for (y = 0; haystack[y] != '\0'; y++)
		{
			if (needle[x] == haystack[y])
				return (haystack + y);
		}
	}
	return (0);
}
