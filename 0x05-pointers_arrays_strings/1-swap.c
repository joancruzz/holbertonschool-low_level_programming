#include "holberton.h"

/**
  * swap_int - Entry
  * @a: give value of b
  * @b: give value of a
  * Return: zero
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

