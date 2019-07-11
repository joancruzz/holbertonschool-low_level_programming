#include "holberton.h"

/**
  * factorial - Factora given number
  * @n: Given number to factor
  * Return: Factorial
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
