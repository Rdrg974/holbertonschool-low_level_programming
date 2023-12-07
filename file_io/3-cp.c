#include "main.h"

/**
 * main - a program that copies the content of a file to another file
 * @ac: nb of arguments
 * @av: array of files
 * Return: 0
 */

int main(int ac, char *av[])
{
	int fd1, fd2;
	int bytes_read, bytes_written;
	char buffer[1024];
	const char *file_from;
	const char *file_to;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = av[1];
	file_to = av[2];
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	while ((bytes_read = read(fd1, buffer, 1024)) > 0)
	{
		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_written != bytes_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}
