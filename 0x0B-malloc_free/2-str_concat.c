#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 * @s1: First string
 * @s2: Second string
 *Return: Null or cat
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int size1;
	int size2;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1];)
		size1++;
	for (size2 = 0; s2[size2];)
		size2++;

	cat = malloc(sizeof(char) * (size1 + size2 + 1));
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		cat[i] = s1[i];
	for (; i < size1 + size2; i++)
		cat[i] = s2[i - size1];
	cat[size1 + size2] = '\0';

	return (cat);
}
