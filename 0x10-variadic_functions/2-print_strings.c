#include "variadic_functions.h"

/**
  * print_strings - Print strings
  * @separator: String to print between the strings
  * @n: Number of strings to print
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments; /*strings to be printed*/
	unsigned int countarg; /*counter for arguments*/
	char *str;

	va_start(arguments, n); /*initial valist for n num of arguments*/
	for (countarg = 0; countarg < n; countarg++)
	{
		str = va_arg(arguments, char *);
		if (separator != NULL && countarg != (n - 1))
		{
			if (arguments !=  NULL)
				printf("%s%s", str, separator);
			else
				printf("(nil)%s", separator);
		}

		else
		{
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
		}
	}
	printf("\n");
	va_end(arguments);
}
