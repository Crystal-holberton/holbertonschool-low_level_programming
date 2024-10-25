#include "main.h"

/**
 * times_table - prints the 9 times table
 * Returns: void
 */

void times_table(void)
{
	int x = 0, y, z;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = x * y;
			if (z >= 10)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else
			{
				_putchar(32);
				_putchar(z + '0');
			}
			if (y < 9)
			{
				_putchar(44);
				_putchar(32);
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
