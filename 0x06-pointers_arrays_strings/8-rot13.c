#include "holberton.h"
/**
 * rot13 - Change string into rot13
 * @s: String
 * Return: s
 */

char *rot13(char *s)
{
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x, y;

	for (x = 0; s[x] != 0; x++)
	{
		for (y = 0; upper[y] != 0; y++)
		{
			if (s[x] == upper[y])
			{
				s[x] = rot13[y];
				break;
			}
		}
	}
	return (s);
}
