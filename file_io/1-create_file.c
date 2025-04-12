#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written = 0;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	/* O_CREAT: create if doesn't exist, O_TRUNC: truncate if it does */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		written = write(fd, text_content, len);
		if (written == -1 || (size_t)written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
