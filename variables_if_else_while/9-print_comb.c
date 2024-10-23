#include <stdio.h>

/**
 * main - Entry point
 * "prints all possible combinations of single-digit numbers"
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
