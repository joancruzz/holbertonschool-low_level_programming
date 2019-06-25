#include "holberton.h"
/**
  *print_last_digit - print last digit using modules
  *@x: Print last digit
  *Return: Last digit
  */

int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
		x = x * -1;
			_putchar ('0' + x);
	return (x);
}
