#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * close_fd - Closes a file descriptor and handles error
 * @fd: The file descriptor
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * open_source - Opens source file for reading
 * @filename: The name of the source file
 * Return: The file descriptor
 */
int open_source(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open_dest - Opens destination file for writing/truncating
 * @filename: The name of the destination file
 * Return: The file descriptor
 */
int open_dest(const char *filename)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * copy_file - Copies content from one fd to another
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 * @buffer: Buffer to use
 */
void copy_file(int fd_from, int fd_to, char *buffer)
{
	ssize_t rd, wr;

	rd = read(fd_from, buffer, BUF_SIZE);
	while (rd > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to fd\n");
			close_fd(fd_from);
			close_fd(fd_to);
			exit(99);
		}
		rd = read(fd_from, buffer, BUF_SIZE);
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from fd\n");
		close_fd(fd_from);
		close_fd(fd_to);
		exit(98);
	}
}

/**
 * main - Entry point: copies content of file_from to file_to
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, exits with error codes on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	char buffer[BUF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_source(av[1]);
	fd_to = open_dest(av[2]);

	copy_file(fd_from, fd_to, buffer);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
