#include "holberton.h"

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: String
 * @accept: bytes in string
 * Return: Zero
 */


char *_strpbrk(char *s, char *accept)

{


	int iterateONE;
	int iterateTWO;

	for (iterateONE = 0; s[iterateONE] != 0; iterateONE++)

	{
		for (iterateTWO = 0; accept[iterateTWO] != 0; iterateTWO++)

		{
			if (accept[iterateTWO] == s[iterateONE])

			{
				return (&s[iterateONE]);
			}
		}
	}

	return (0);
}
