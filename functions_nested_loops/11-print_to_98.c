#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Starting number
 *Return: Always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
				n++;
			}
			else
			{
				printf("%d, ", n);
				n++;
			}
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
				n--;
			}
			else
			{
				printf("%d, ", n);
				n--;
			}
		}
	}
}
