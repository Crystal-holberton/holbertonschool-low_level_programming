#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number that digit is identified
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
