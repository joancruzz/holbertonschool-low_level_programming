#include "holberton.h"
/**
 * check_for_prime - checks if the integer is prime
 * @x: character to check
 * @y: character to check
 * Return: int
 */
int check_for_prime(int x, int y)
{
	if (x <= 1)
		return (0);

	if (x == 2)
		return (1);

	if (y * y > x)
		return (1);

	if (x % y == 0)
		return (0);

	return (check_for_prime(x, y + 1));
}

/**
 * is_prime_number - checks if the integer is prime
 * @n: character to check
 * Return: int
 */
int is_prime_number(int n)
{
	return (check_for_prime(n, 2));
}
