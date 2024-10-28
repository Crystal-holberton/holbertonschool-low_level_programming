#include "main.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Return: Always 0 (Success)
 */

int main(void)
{
	int z = 1;

	while (z <= 100)
	{
		if ((z % 3 == 0) && (z % 5 == 0))
		{
			printf("FizzBuzz");
			z++;
		}
		else if (z % 3 == 0)
		{
			printf("Fizz");
			z++;
		}
		else if (z % 5 == 0)
		{
			printf("Buzz");
			z++;
		}
		else
		{
			printf("%d", z);
			z++;
		}
		if (z <= 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
