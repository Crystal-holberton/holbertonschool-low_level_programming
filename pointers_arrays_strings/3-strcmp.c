#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer of first string
 * @s2: pointer of second string
 * Return: print negative if s1 < s2
 * print positive  if s1 > s2
 * print 0 if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
