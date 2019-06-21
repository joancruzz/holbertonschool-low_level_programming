#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print all single digit numbers of base 10
* Return: 0
*/

int main(void)
{
	char x;

	x = '0';
	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);

}
