#include "holberton.h"

/**
  * jack_bauer - Print hour and minute
  * Return: void
  *
  */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar ('0' + h / 10);
			_putchar ('0' + h % 10);
			_putchar (':');
			_putchar ('0' + m / 10);
			_putchar ('0' + m % 10);
			_putchar ('\n');
		}
	}
}

