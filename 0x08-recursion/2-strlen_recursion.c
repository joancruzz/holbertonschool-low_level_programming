#include "holberton.h"

/**
  * _strlen_recursion - Return length of string
  * @s: String to find length of
  * Return: length of string
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
