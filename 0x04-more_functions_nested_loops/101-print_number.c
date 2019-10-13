#include "holberton.h"
/**
 * print_number - function that prints given number
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int m;
	int x;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}

	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	else
		m = n;

	if (m > 0)
	{
		x = m % 10;
		if (m / 10 > 0)
			print_number(m / 10);
		_putchar(x + '0');
	}
}
