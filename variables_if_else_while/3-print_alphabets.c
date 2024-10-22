#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * "prints the alphabet in lowercase, and then in uppercase"
 * Return: Always (Success)
 */

int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
		putchar (i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar (j);
		j++;
	}
	putchar('\n');

	return (0);
}
