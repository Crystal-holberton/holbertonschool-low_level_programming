#include <stdio.h>

/**
 * main - Entry point
 * "prints all single digit numbers of base 10 starting from 0"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
