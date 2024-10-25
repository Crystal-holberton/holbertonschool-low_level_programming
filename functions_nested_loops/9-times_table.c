#include "main.h"

/**
 * times_table - prints the 9 times table
 * Returns: void
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = y * x;
			if (y == 0)
			{
				_putchar(z + '0');
			}

			if (z < 10 && y != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
