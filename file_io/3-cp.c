#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - prints error message then exits
 * @code: exit code
 * @message: error format string
 * @filename: filename causing error
 * Return: void
 */
void error_exit(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

/**
 * copy_file - copies content from file to file
 * @file_from: source file descriptor
 * @file_to: destination file descriptor
 * @file_from_name: source file name
 * @file_to_name: destination file name
 * Return: void
 */
void copy_file(int file_from, int file_to, const char *file_from_name,
		const char *file_to_name)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			error_exit(99, "Error: Can't write to %s\n", file_to_name);
		}
	}
	if (bytes_read == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", file_from_name);
	}
}

/**
 * close_file - closes file descriptor and handles errors
 * @fd: file descriptor to close
 * Return: void
 */
void close_file(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of file to another file
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 on success, otherwise exit with error code
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n", NULL);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to < 0)
	{
		close_file(file_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	copy_file(file_from, file_to, argv[1], argv[2]);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
