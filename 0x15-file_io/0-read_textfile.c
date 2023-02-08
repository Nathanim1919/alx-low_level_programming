#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of lettrs it should read and print
 * Return: actual number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	int fd;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL || !buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
		return (0);
	bytes_read = write(STDOUT_FILENO, buf, bytes_read);
	free(buf);
	if (bytes_read == -1)
		return (0);
	close(fd);
	return (bytes_read);
}
