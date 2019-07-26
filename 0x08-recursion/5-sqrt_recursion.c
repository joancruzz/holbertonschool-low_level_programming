#include "holberton.h"

/**
 * _sqrt_recursion - Square root function
 * @x: Any number to square root
 */

int sqrt(int x, int root)
{
	int square = root * root;

	if (square < x)
		return (sqrt(x, root + 1));
	else if (square > x)
		return (-1);
	else
		return (root);
}

/**
 * _sqrt_recursion - Square root function
 * @n: N
 * Return: Square root if perfect, if not -1
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0));
}
