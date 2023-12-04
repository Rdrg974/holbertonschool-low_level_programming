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
	ssize_t count = 0, bytes_written;

	if (filename)
	{
		buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
			return (0);
		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			free(buffer);
			return (0);
		}
		count = read(fd, buffer, letters);
		if (count == -1)
		{
			close(fd);
			free(buffer);
			return (0);
		}
		bytes_written = write(STDOUT_FILENO, buffer, count);
		close(fd);
		free(buffer);
		if (bytes_written == -1 || bytes_written != count)
			return (0);
	}
	return (count);
}
