#include "main.h"

/**
 * main - a program that copies the content of a file to another file
 * @ac: nb of arguments
 * @av: array of files
 * Return: 0
 */

int main(int ac, char **av)
{
	int fd1, fd2;
	int bytes_read, bytes_written;
	char *buffer[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (access(av[2], F_OK) != -1)
		fd2 = open(av[2], O_TRUNC | O_WRONLY);
	else
		fd2 = open(av[2], O_CREAT | O_WRONLY, mode);
	while ((bytes_read = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fd1);
			close(fd2);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		close(fd1);
		close(fd2);
		exit(98);

	}
	if (close(fd1) == -1 || close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd");
		exit(100);
	}
	return (0);
}
