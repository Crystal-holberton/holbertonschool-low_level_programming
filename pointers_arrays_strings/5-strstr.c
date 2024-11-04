#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @needle: the found substring
 * @haystack: the string being searched
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
