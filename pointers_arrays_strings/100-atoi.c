#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer thats converted
 * Return: integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int nil = 0;
	int sign = 1;
	int res = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			sign *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			res = 1;
			nil = (nil * 10) + (s[c] - '0');
			c++;
		}
		if (res == 1)
		{
			break;
		}
		c++;
	}
	nil *= sign;
	return (nil);
}
