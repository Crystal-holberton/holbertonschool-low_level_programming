#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements of an array
 * @size: size of bytes
 * Return: allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
	{
		return (NULL);
	}
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
