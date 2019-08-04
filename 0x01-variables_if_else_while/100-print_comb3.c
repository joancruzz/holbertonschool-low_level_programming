#include <stdio.h>

/**
 * main - print combination of two digit numbers
 * Return: 0
 */

int main(void)
{
	int second;
	int first;

	for (second = 0; second <= 9; second++)
	{
		for (first = second + 1; first <= 9; first++)
		{
			putchar(second + '0');
			putchar(first + '0');

			if (second < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
