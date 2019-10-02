#include "holberton.h"
/**
 * print_times_table - Print the n times table
 * @n: The times table to print
 */
void print_times_table(int n)
{
	int x;
	int y;

	if ((n > 15) || (n < 0))
		return;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			if ((x * y) < 10)
			{
				if (y != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if ((x * y) < 100)
			{
				_putchar(' ');
				_putchar(x * y / 10 + '0');
			}
			else
			{
				_putchar(x * y / 100 + '0');
				_putchar((x * y / 10) % 10 + '0');
			}
			_putchar(x * y % 10 + '0');
			if (y == n)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
