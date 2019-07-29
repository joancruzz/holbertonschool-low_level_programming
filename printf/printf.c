#include "holberton.h"
#include <stdio.h>

/**
 * _printchar - function that prints character
 * @arguments: data type held in va_list to print
 */

void _printchar(va_list arguments)
{
	int i;

	for (i = 0; format[i] == '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
			i++;
		else
			_putchar(format[i]);
	}
}


/**
 * _printint - function that prints integer
 * @arguments: data type held in va_list to print
 */
/*void _printint(va_list arguments)
{
	int i; use write

}
*/

/**
 * _printfloat - function that prints float
 * @arguments: data type held in va_list to print
 */
/**
void _printdig(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}
*/
/**
 * _printstr - function that prints string
 * @arguments: data type help in va_list to print
 */

int _printstr(va_list arguments)
{
	const char *str;
	int i;

	str = va_arg(arguments, char*);
	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_all - function that prints all datatypes
 * @format: array of chars for the data types
 */
int _printf(const char * const format, ...)
{

	int x;
	int y;
	va_list arguments;
	int counter = 0;

	data_t type[] = {
/*		{"c", _printchar}, */
	/*	{"i", _printint}, */
	/*	{"d", _printdig}, */
		{"s", _printstr},
		{NULL, NULL}
	};

	va_start(arguments, format);

	if ((format[0] == '%' && format[1] == '\0') || format == NULL)
		return (-1);

	for (x = 0; format != NULL && format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			counter = counter + _putchar(format[x]);
			continue;
		}
		for (y = 0; type[y].result != NULL; y++)
		{
			if (*type[y].result == format[x + 1])
			{
				counter = counter + type[y].f(arguments);
				break;

			}
		}
		x++;
		if (type[y].result == NULL)
		{
			counter = counter + _putchar('%');
			counter = counter + _putchar(format[x]);
		}
	}
	va_end(arguments);
	return (counter);
}
