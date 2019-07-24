#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - Function that prints a name
  * @name: Name passed into function
  * @f: Pointer to function
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
