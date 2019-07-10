#include "holberton.h"

/**
  * _print_rev_recursion - Print string in reverse
  * @s: Character pointer to string
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
