#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * print_error - prints error
 * @message: error format string
 * @filename: filename causing error
 * @exit_code: exit code
 * Return: void
 */
void print_error(const char *message, const char *filename, int exit_code)
{
	if (filename)
	{
		dprintf(STDOUT_FILENO, "%s %s\n", message, filename);
	}
	else
	{
		dprintf(STDOUT_FILENO, "%s\n",  message);
	}
	exit(exit_code);
}

/**
 * close_file - closes file
 * @fd: The file descriptor to be closed
 * Return: void
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - copies file
 * @file_from: original copied file
 * @file_to: new copied file
 * Return: void
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file", file_from, 98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error("Error: Can't write to", file_to, 99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error("Error: Can't write to", file_to, 99);
		}
	}
	if (bytes_read == -1)
	{
		print_error("Error: Can't read from file", file_from, 98);
	}
	close_file(fd_from);
	close_file(fd_to);
}

/**
 * main - copies content of file to another file
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 on success, otherwise exit with error code
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
