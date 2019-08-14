#include "holberton.h"
/**
 * read_textfile - function that reads & prints text file to the POSIX STDOUT
 * @filename: text file to be read
 * @letters: number of letters that are in file
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes, buff_write, buff_read;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);

	buff_read = read(filedes, buffer, letters);
	buff_write = write(STDOUT_FILENO, buffer, buff_read);
	free(buffer);

	if (buff_write == -1 || buff_read == -1)
		return (0);
	close(filedes);
	return (buff_write);
}
