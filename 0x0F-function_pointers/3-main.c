#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 for success, 98, 99, 100 for error
 */

int main(int argc, char *argv[])
{
	int (*newop)(int, int);
	int (*x)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = get_op_func(argv[2]);
	if (x == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && atoi(argv[3]) == 0)
			|| (argv[2][0] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	newop = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%i\n", newop(num1, num2));
	return (0);
}
