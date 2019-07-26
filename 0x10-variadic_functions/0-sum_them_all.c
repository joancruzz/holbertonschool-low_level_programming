#include "variadic_functions.h"

/**
  * sum_them_all - Returns the sum of all parameters
  * @n: Constant number of elements
  * Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	va_list arguments;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(arguments, n);

	for (i = 0; i < n; i++)
		sum += va_arg (arguments, unsigned int);

	va_end (arguments);
	return(sum);
}
