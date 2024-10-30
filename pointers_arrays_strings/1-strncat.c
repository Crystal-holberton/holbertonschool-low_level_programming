#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: the destination
 * @src: source string
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int d = 0;

	while (dest[i++])
	{
	d++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
	dest[d++] = src[i];
	}
	return (dest);
}
