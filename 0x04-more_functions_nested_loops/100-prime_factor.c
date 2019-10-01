#include <stdio.h>
#include <math.h>
/**
  * main - Entry
  * Return: 0
  */

int main(void)
{
	int n;
	long num = 612852475143;

	for (n = 2; n <= num; n++)
	{
		if (num % n == 0)
		{
			num = num / n;
			n--;
		}
	}
	printf("%d\n", n);
	return (0);
}
