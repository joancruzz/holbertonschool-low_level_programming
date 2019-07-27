#include "variadic_functions.h"

/**
 * _printchar - function that prints character
 * @arguments: data type held in va_list to print
 */
void _printchar(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}


/**
 * _printint - function that prints integer
 * @arguments: data type held in va_list to print
 */
void _printint(va_list arguments)
{
	printf("%i", va_arg(arguments, int));
}

/**
 * _printfloat - function that prints float
 * @arguments: data type held in va_list to print
 */
void _printfloat(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}

/**
 * _printstr - function that prints string
 * @arguments: data type help in va_list to print
 */
void _printstr(va_list arguments)
{
	char *str;

	str = va_arg(arguments, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that prints all datatypes
 * @format: array of chars for the data types
 */
void print_all(const char * const format, ...)
{

	unsigned int x = 0;
	int y = 0;
	char *separator = "";
	va_list arguments;

	datatypes_t types[] = {
		{"c", _printchar},
		{"i", _printint},
		{"f", _printfloat},
		{"s", _printstr},
		{NULL, NULL}
	};

	va_start(arguments, format);

	while (format != NULL && format[x])
	{
		y = 0;
		while (types[y].argtype)
		{
			if (format[x] == *types[y].argtype)
			{
				printf("%s", separator);
				types[y].funcpointer(arguments);
				separator = ", ";

			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(arguments);
}
