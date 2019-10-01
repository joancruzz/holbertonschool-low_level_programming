#include "holberton.h"
/**
 * print_triangle - Program that prints triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, spaces = 0;

	if (size <= 0)
		_putchar('\n');
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			spaces = (size - 1) - x;
			if (y < spaces)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
