#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer thats converted
 * Return: integer
 */

int _atoi(char *s)
{
	int c = 0;
	int sign = 1;
	int result = 0;

	if (s[c] == 45)
	{
		sign = -1;
		c++;
	}
	if (s[c] == 43)
	{
		c++;
	}
	while (s[c] != '\0')
	{
		if (s[c] >= 48 && s[c] <= 57)
		{
			result = result * 10 + (s[c] - 48);
		}
		else
		{
			break;
		}
		c++;
	}
	result = result * sign;
	return  (result);
}

