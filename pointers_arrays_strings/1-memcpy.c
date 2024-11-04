#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copies memory area
 * @n: bytes
 * @src: memory area to be copied
 * @dest: memory area to be stored
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
