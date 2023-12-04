#include "main.h"

/**
 * create_file - creates a file
 * @filename: my file
 * @text_content: the contains of my file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename)
	{
		if (text_content == NULL)
			text_content = "";
		fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, mode);
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
