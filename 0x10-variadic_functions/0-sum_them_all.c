#include "variadic_functions.h"
/**
  * sum_them_all - Returns the sum of all parameters
  * @n: Constant number of elements in the argument
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0; /*sum of all arguments*/
	va_list arguments; /*numbers that will be added*/
	unsigned int i; /*counter for arguments*/

	if (n == 0)
		return (0);
	va_start(arguments, n);

	for (i = 0; i < n; i++) /*count for elements(n) of argument*/
		sum += va_arg(arguments, int);
	va_end(arguments);
	return (sum);
}
