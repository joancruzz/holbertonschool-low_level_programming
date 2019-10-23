#include "holberton.h"

/**
 * _strchr - Locate character in a string
 * @s: String
 * @c: Char variable
 * Return: First occurance of character
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);

		if (*s == '\0')
			return ('\0');
	}
	return ('\0');
}
