#include <stdio.h>

/**
 * main - Entry point
 * "Prints the alphabet in lower-case"
 * Return: Always (Success)
 */

int main(void)

{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
