#include "holberton.h"

/**
  *_isdigit - Entry
  *@c: Check if digit
  *Return: 0 or 1
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
