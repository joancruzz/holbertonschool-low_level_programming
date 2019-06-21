#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Print alphabet in lowercase letters and uppercase
  * Return: 0
  */
int main(void)
{
	char x, X;

	x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	X = 'A';
	while (X <= 'Z')
	{
		putchar(X);
		X++;
	}

	putchar('\n');
	return (0);
}
