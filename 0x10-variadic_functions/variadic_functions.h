#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * struct datatypes - struct to use group all datatypes
  * @argtype: the type of argument
  * @funcpointer: function pointer to print function
  */

typedef struct datatypes
{
	char argtype;
	void (*funcpointer)(va_list argument);
} datatypes_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*VARIADIC_FUNCTIONS_H*/
