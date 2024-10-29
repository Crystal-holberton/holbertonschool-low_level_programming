#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: string thats modified
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0, index = 0;
	char temp;

		while (s[length] != '\0')
		{
			length++;
		}
		for (; index < length / 2; index++)
		{
			temp = s[index];
			s[index] = s[length - index - 1];
			s[length - index - 1] = temp;
		}
}
