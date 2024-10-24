#include "main.h"

/**
 * _islower - Checks for lowercase letters
 * @c: the checked character
 * Return: 1 for lowercase and anything else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
