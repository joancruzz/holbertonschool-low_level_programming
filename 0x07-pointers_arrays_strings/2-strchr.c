#include "holberton.h"

/**
 * _strchr - Locate character in a string
 * @s: String
 * @c: Char variable
 * Return: First occurance of character
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}

		else if (c == '\0')
		{
			return (s + x);
		}
	}
	return ('\0');
}
