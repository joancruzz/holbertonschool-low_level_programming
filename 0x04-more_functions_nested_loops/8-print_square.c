#include "holberton.h"

/**
 * print_square - Entry
 * @size: size of square
 *Return: 0
 */


void print_square(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 2; col <= size; col++)
		{
			_putchar ('#');
		}
		_putchar ('#');
		_putchar ('\n');
	}

}
