#include "holberton.h"

/**
 * leet - Entry point
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
	int x, y;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char new[] = {'4', '3', '0', '7', '1'};

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y <= 4; y++)

		{
			if (s[x] == lower[y] || s[x] == upper[y])
			{
				s[x] = new[y];
			}
		}
	}

	return (s);
}
