#include "holberton.h"

/**
 *print_binary -Function that prints the binary representation of a number
 *@n: int value to convert
 *Return: Always 0
 */
void print_binary(unsigned long int n)
{
	int x, index = 0;
	unsigned long int y;

	for (x = 63; x >= 0; x--)
	{
		y = n >> x;

		if (y & 1)
		{
			_putchar('1');
			index++;
		}
		else if (index)
			_putchar('0');
	}
	if (!index)
		_putchar('0');
}
