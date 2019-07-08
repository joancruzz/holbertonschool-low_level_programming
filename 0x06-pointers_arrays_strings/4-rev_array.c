#include "holberton.h"

/**
 * reverse_array - Entry point
 * @a: int pointer
 * @n: number of elements in array
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int x, y, temp;

	y = n;
	for (x = 0; x < y; x++)
	{
		temp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temp;
		y--;
	}
}
