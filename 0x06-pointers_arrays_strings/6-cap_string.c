#include "holberton.h"

/**
 * cap_string - Entry point
 * @s: string
 * Return: s
 */

char *cap_string(char *s)
{
	int x, y;

	char sym[] = " ,:.!?\"(){}\t\n";

	for (x = 0; s[x] != 0; x++)
	{
		for (y = 0; s[x] > 'a' && s[x] < 'z' && sym[y] != 0; y++)
		{
			if (s[x - 1]  == sym[y] || s[x] == s[0])
		{
			s[x] = s[x] - 32;
		}
		}
	}
	return (s);
}
