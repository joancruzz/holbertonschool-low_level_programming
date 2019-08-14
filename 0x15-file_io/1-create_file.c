#include "holberton.h"
/**
  * create_file - function that creates a file
  * @filename: name of file
  * @text_context: terminated string
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int filedes, letters, write_buff;

	if (!filename)
		return (-1);
	filedes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filedes == -1)
		return (-1);
	if (!text_content)
	{
		close (filedes);
		return (1);
	}
	letters = _strlen(text_content);
	write_buff = write(filedes, text_content, letters);
	close (filedes);
	if (write_buff < letters)
		return (-1);
	return (1);
}
/**
  * _strlen - function that returns length of string
  * @str: string pointer
  * Return: size of string
  */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
