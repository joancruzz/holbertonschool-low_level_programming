#include "holberton.h"

/**
 * *_strcpy - copy string from src to dest
 * @dest: destination to copy string
 * @src: source where string is being copied from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (src[length] != '\0')
		length++;
	for (; i < length + 1; i++)
		dest[i] = src[i];
	return (dest);
}
