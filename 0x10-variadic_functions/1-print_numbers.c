#include "variadic_functions.h"

/**
  * print_numbers - Prints string of integers
  * @separator: String of spaces
  * @n: Number of integers in string
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int countarg; /*counter for argument*/
	va_list arguments; /*numbers to be printed*/


	va_start(arguments, n); /*initial valist for n number of arguments*/

	for (countarg = 0; countarg < n; countarg++)
	{
		printf("%d", va_arg(arguments, const unsigned int));
		if (separator != NULL && countarg != (n - 1)) /*n - 1 to not print ,*/
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
