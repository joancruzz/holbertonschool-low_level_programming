#include "holberton.h"

/**
 * _strcmp  - Entry point
 * @s1: compare to s2
 * @s2: compare to s1
 *Return: 0x
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	for (result = 0; s1[result] == s2[result] && s1[result] == 0; result++)

	if (s1[result] < s2[result])
		return (-15);
	else if (s1[result] > s2[result])
		return (15);
	else
		return (result);
}
