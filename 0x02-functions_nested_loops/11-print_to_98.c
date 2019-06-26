#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: variable to start count to 98
 * Return: 
 */

void print_to_98(int x)
{
	if (x < 98)
	{
		for (x = x; x < 98; x++)
			printf("%d, ", x);
		printf("%d\n", 98);
	}
	else
	{
		for (x = x; x > 98; x--)
			printf("%d, ", x);
		printf("%d\n", 98);
	}
}
