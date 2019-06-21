#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print alphabet in lowercase letters
* Return: 0
*/
int main(void)
{
	char x;

	x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}




