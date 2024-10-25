#include "main.h"

/**
 * times_table - prints the 9 times table
 * Returns: void
 */

void times_table(void)
{
	int x = 0, y = 0;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			int z = x * y;

			if (z >= 10)
			{
				_putchar((z / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar((z % 10) + '0');

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
