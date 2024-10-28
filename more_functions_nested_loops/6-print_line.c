#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: void
 */

void print_line(int n)
{
	int u = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (u < n)
		{
			_putchar(95);
			u++;
		}
		_putchar('\n');
	}
}
