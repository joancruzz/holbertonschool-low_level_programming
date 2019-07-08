#include "holberton.h"

/**
 *  - Entry point
 *
 *Return: 
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
