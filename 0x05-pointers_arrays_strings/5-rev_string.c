#include "holberton.h"

/**
 * rev_string - Entry
 * @s: Write function in reserve
 * Return: void
 */

void rev_string(char *s)
{
	int front = 0;
	int back = 0;
	char i;

	while (s[front] != '\0')
		front++;
	while (back < front)
	{
		i = s[front - 1];
		s[front - 1] = s[back];
		s[back] = i;
		back++;
		front--;
	}
}

