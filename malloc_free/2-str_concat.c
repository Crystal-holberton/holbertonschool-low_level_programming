#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: concatenated strings, else null
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		s[len1 + j] = s2[j];
		j++;
	}
	s[len1 + len2] = '\0';
	return (s);
}
