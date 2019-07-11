#include "holberton.h"

/**
  * _pow_recursion - Power functions
  * @x: Variable to be powered
  * @y: Power variable
  * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
