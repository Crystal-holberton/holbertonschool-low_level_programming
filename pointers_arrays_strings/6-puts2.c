#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: the string
 * Return: void
 */

void puts2(char *str)
{
	int a = 0;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	for (; a < b; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
