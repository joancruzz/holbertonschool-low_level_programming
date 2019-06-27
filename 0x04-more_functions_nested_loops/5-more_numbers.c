#include "holberton.h"

/**
 *more_numbers - Entry
 *
 *Return: 0
 */

void more_numbers(void)
{
	int n, m;
	for (m = 0; m <= 10; m++)
	{


		for (n = 0; n <= 14; n++)



		{
			int tens;
			int ones;

			tens = n / 10;
			ones = n % 10;

			if (tens != 0)
				_putchar (tens + '0');

			_putchar (ones + '0');
		}

		_putchar ('\n');

	}

}


