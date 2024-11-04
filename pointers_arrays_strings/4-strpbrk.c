#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: location of bytes
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int n = 0;

		while (accept[n] != '\0')
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
			n++;
		}
		i++;
	}
	return (NULL);
}
