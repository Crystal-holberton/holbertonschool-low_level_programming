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
		dprintf(2, "%s %s\n", message, filename);
	}
	else
	{
		dprintf(2, "%s\n",  message);
	}
	exit(exit_code);
}

/**
 * main - copies content of file to another file
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 on success, otherwise exit with error code
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to\n", NULL, 97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error("Error: Can't write to %s\n", argv[2], 99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error("Error: Can't write to %s\n", argv[2], 99);
		}
	}
	if (bytes_read == -1)
	{
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}
	if (close(fd_from) == -1)
	{
		print_error("Error: Can't close fd %d\n", NULL, 100);
	}
	if (close(fd_to) == -1)
	{
		print_error("Error: Can't close fd %d\n", NULL, 100);
	}
	return (0);
}
