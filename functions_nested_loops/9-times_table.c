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
			if (y > 0)
			{
				_putchar(' ');
			}
			if (z < 10)
			{
				_putchar('0' + z);
			}
			else
			{
				_putchar('0' + z / 10);
				_putchar('0' + z % 10);
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
