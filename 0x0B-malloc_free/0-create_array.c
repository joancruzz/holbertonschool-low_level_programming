#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * create_array - 
  *
  *
  *
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size != 0)
	{
		s = malloc (size * sizeof(char));
		if (s == NULL)
		{
			return (NULL);
		}

		while (i < size)
		{
			s[i] = c;
			i++;
		}

		return(s);
	}
	else
		return (NULL);
}
