#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination
 * @src: source string
 * @n: bytes from string
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int s = 0;

	while (src[i++])
	{
		s++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = s; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
