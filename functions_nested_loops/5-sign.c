#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: number being checked
 * Return: positive is 1, negative is -1 and 0 is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
