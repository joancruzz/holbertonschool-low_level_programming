#include "holberton.h"
/**
 * _puts - functiont that prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

