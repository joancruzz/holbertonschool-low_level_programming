#include "holberton.h"

/**
 * string_toupper - Entry point
 * @s: String
 *Return: s
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;
		;
	}
	return (s);
}


