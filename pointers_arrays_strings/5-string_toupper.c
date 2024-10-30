#include "main.h"

/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @str: input string
 * Return: pointer to changed string
 */

char *string_toupper(char *str)
{
	int i = 0;
	int d = 'a' - 'A';

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - d;
		}
		++i;
	}
	return (str);
}
