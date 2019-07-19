#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings
 * @s1: First string
 * @s2: Second string
 * @n: byte size of s2
 * Return: Contatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1;
	char *concat;
	unsigned int i;
	unsigned int size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1]; size1++)
		;
	for (size2 = 0; s2[size2]; size2++)
		;
	if (size2 < n)
		n = size2;

	concat = malloc(sizeof(char) * (size1 + n + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		concat[i] = s1[i];

	for (; i < size1 + n; i++)
		concat[i] = s2[i - size1];
	concat[i] = '\0';

	return (concat);


}
