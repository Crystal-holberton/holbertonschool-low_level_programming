#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * "prints the alphabet in lowercase, excluding q and e"
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar (x);
		}
		x++;
	}

	putchar ('\n');

	return (0);
}
