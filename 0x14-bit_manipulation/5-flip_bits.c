#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip to get from one number to another.
 * @n: number
 * @m: number passed
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	int index = 0;

	while (num)
	{
		if (num & 1)
			index++;
		num = num >> 1;
	}
	return (index);
}
