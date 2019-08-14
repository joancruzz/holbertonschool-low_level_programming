#include "holberton.h"

/**
 * append_text_to_file - append text to end of a file
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: On success 1, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, write_buff, letters;

	if (!filename)
		return (-1);
	filedes = open(filename, O_APPEND | O_RDWR);
	if (filedes == -1)
		return (-1);
	if (!text_content)
	{
		return (1);
		close(filedes);
	}
	letters = _strlen(text_content);
	write_buff = write(filedes, text_content, letters);
	close(filedes);
	if (write_buff < letters)
		return (-1);
	return (1);
}
/**
 * _strlen - function that returns length of string
 * @str: string pointer
 * Return: length of string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
