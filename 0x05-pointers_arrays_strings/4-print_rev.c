#include "holberton.h"

/**
 * print_rev - Entry
 * @s: Print string
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int count;
	int j;

	for (i = 0; s[i] != '\0'; i++)

		count++;

	for (j = count - 1; s[j] > '\0'; j--)

		_putchar(s[j]);

	_putchar('\n');
}

