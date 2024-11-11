#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: array size
 * @c: char that fills array
 * Return: NULL if size = 0
 * otherwise returns pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
