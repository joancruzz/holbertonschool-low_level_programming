#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print the alphabet in lowercase,
* Return: 0
*/

int main(void)
{
	char x;

	x = 'z';

	while (x >= 'a')
	{
		putchar (x);
		x--;
	}
	putchar('\n');
	return (0);
}
