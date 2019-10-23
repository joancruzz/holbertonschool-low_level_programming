#include "holberton.h"
/**
 * _strstr - Locate a substring
 * @haystack: string
 * @needle: substring
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (; ; haystack++)
	{
		i = 0;
		while (haystack[i] && needle[i] && haystack[i] == needle[i])
			i++;
		if (!needle[i])
			return (haystack);
	}
	return (0);
}
