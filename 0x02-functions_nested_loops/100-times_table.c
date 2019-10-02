#include "holberton.h"
/**
  * print_times_table - function that prints times table
  * @n: the nth num of the times table
  * Return: void
  */

void print_times_table(int n)
{
	int x, y;

	if ((n < 0) || (n > 15))
		return;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			if ((x * y) < 10)
			{
				if (y != 0)
				{
					putchar(' ');
					putchar(' ');
				}

			}
			else if ((x * y) < 100)
			{
				putchar(' ');
				putchar(x * y / 10 + '0');
			}
			else
			{
				putchar(x * y / 100 + '0');
				putchar((x * y / 10) % 10 + '0');
			}
			putchar(x * y % 10 + '0');
			if (y == n)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
