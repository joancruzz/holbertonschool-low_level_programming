#include "holberton.h"

/**
 * print_line - Entry
 * @n: integer
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar ('_');

	}

	_putchar ('\n');
}

