#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message
 * @message: error message to print
 * @filename: The name of the file
 * @exit_code: The exit code
 * Return: void
 */
void print_error(const char *message, const char *filename, int exit_code)
{
	if (filename)
	{
		dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	}
	else
	{
		dprintf(STDERR_FILENO, "%s\n", message);
	}
	exit(exit_code);
}

/**
 * close_file - Closes a file
 * @fd: The file descriptor
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
 * copy_file - Copies the content of one file to another
 * @file_from: The source file
 * @file_to: The destination file
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
		close_file(fd_from);
		print_error("Error: Can't write to", file_to, 99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close_file(fd_from);
			close_file(fd_to);
			print_error("Error: Can't write to", file_to, 99);
		}
	}
	if (bytes_read == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		print_error("Error: Can't read from file", file_from, 98);
	}
	close_file(fd_from);
	close_file(fd_to);
}

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: The argument vector
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
