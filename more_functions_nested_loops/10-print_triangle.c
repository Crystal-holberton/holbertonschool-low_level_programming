#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = 0;
		while (x < size)
		{
			y = size - x;
			while (y > 1)
			{
				_putchar(32);
				y--;
			}
			z = 0;
			while (z <= x)
			{
				_putchar(35);
				z++;
			}
			_putchar('\n');
			x++;
		}
	}
}
