#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a file
 * @letters: nber letters to read and to print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t count = 0;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1 || letters == 0)
			return (0);
		buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
		{
			close(fd);
			return (0);
		}
		count = read(fd, buffer, letters);
		if (count == -1)
		{
			close(fd);
			return (0);
		}
		write(1, buffer, letters);
		close(fd);
	}
	return (count);
}
