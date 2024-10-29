#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string being halved
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;
	int n;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 1)
	{
		n = (length - 1) / 2;
		n += 1;
	}
	else
	{
		n = length / 2;
	}
	for (; n < length; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
