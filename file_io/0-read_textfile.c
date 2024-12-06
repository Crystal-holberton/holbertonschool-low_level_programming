#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to name of file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buff, letters);
	if (r == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	buff[r] = '\0';
	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	close(fd);
	if (w != r)
	{
		return (0);
	}
	return (w);
}
