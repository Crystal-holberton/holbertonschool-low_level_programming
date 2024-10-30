#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: input string
 * Return: string coverted to 1337
 */

char *leet(char *str)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == a[j])
			{
				str[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
