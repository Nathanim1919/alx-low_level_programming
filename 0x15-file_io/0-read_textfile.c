#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of lettrs it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_read, file_open, count;
	char *buf;

	if (filename ==NULL)
		return (0);

	file_open = open(filename, 0_RDONLY);
	if (file_open == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	count = write(STDOUT_FILENO, buf, file_open);
	if (count == -1)
	{
		free(buf);
		return (0);
	}
	close(file_open);
	free(buf_letters);
	return (count);
}
