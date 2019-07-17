#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr- Concats all arguments
 *@ac: Int
 *@av: Char
 *Return: ar
 */


char *argstostr(int ac, char **av)
{

	char *ar;
	int x, y, z = 0;
	int count = 0;

	if (ac == 0 || av == '\0')
		return ('\0');

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			count++;
		}
		count++;
	}
	ar = (char *) malloc((count + 1) * sizeof(char));

	if (ar == '\0')
	{
		free(ar);
		return ('\0');

	}
	for (z = 0; z < count;)
	{
		for (x = 0; x < ac; x++)
		{
			for (y = 0; av[x][y] != '\0'; y++, z++)
				ar[z] = av[x][y];


			ar[z] = '\n';
			z++;
		}
	}

	return (ar);
}
