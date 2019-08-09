#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decvalue = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		decvalue = 2 * decvalue + (b[index] - '0');
	}

	return (decvalue);
}
