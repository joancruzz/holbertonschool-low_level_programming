#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - Allocate memory
  * @b: unsigned int value
  * Return: pointer
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
	{
		exit(98);
	}
	return (p);
}
