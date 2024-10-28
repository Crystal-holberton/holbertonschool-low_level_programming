#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int x = 0;
	int y = 0;

	while (x < 10)
	{
		while (y <= 14)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
