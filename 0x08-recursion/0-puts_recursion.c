#include "holberton.h"

/**
  * _puts_recursion - output of characters and strings
  * @s: Character pointer taht holds string
  * Return: void
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s++);
	}

}
