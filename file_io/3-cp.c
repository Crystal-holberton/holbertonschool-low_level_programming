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
 * @f_from: source file descriptor
 * @f_to: destination file descriptor
 * @f_from_n: source file name
 * @f_to_n: destination file name
 * Return: void
 */
void copy_file(int f_from, int f_to, const char *f_from_n, const char *f_to_n)
{
	char buffer[BUFFER_SIZE];
	ssize_t b_r, b_w;

	while ((b_r = read(f_from, buffer, BUFFER_SIZE)) > 0)
	{
		b_w = write(f_to, buffer, b_r);
		if (b_w != b_r)
		{
			error_exit(99, "Error: Can't write to %s\n", f_to_n);
		}
	}
	if (b_r < 0)
	{
		error_exit(98, "Error: Can't read from file %s\n", f_from_n);
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
	int f_from, f_to;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp f_from f_to\n", NULL);
	}
	f_from = open(argv[1], O_RDONLY);
	if (f_from < 0)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to < 0)
	{
		close_file(f_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	copy_file(f_from, f_to, argv[1], argv[2]);
	close_file(f_from);
	close_file(f_to);
	return (0);
}
