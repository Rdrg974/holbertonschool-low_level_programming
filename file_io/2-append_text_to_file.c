#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: my file
 * @text_content: the contains of my file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	if (filename)
	{
		if (text_content == NULL)
		{
			if (access(filename, F_OK) == -1 || access(filename, W_OK) == -1)
				return (-1);
			return (1);
		}
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
