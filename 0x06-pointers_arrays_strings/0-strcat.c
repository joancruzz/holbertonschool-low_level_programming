#include "holberton.h"

/**
 * _strcat  - Entry point
 * @dest: switch string with src
 * @src: switch string with dest
 *Return: dest
 */

char *_strcat(char *dest, char *src)
	{
		char *temp = dest;

		while (*temp)
		{
			temp++;
		}
		while (*src)
		{
			*temp = *src;
			temp++;
			src++;
		}
		*temp = 0;
		return (dest);
	}
