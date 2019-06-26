#include "holberton.h"

/**
*
*
*
*/

void times_table(void)
{
	int x, y, result;

	for (x = 0; x < 10; x++)
	{
		for ( y=0; y < 10; y++)
		{
			result = x * y;

			if (result >= 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');

				if (y < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				_putchar(result + '0');

				if (y < 9)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			}
		}
	_putchar ('\n');
	}
}
