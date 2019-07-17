#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *strtow-splits a string into word
 *@str: char
 *Return: char
 */
char **strtow(char *str)
{
	char **ar;
	int x, y, z, count = 0, word = 0, length = 0, letter;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			count++;
	}
	if (count == 0)
		return (NULL);
	ar = malloc((count + 1) * sizeof(char *));
	if (ar == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0' && word < count; x++)
	{
		if (str[x] != ' ')
		{
			y = x;
			length = 0;
			for (; str[y] != '\0' && str[y] != ' '; y++, length++)
				;
			ar[word] = malloc((length + 1) * sizeof(char));
			if (ar[word] == NULL)
			{
				for (z = 0; z < word; z++)
					free(ar[word]);
				free(ar);
				return (NULL);
			}
			for (letter = 0; letter < length; letter++, x++)
				ar[word][letter] = str[x];
			ar[word][letter] = '\0';
			word++;
		}
	}
	ar[word] = NULL;
	return (ar); }
