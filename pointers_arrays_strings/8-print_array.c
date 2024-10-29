#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the array
 * @n: number of elements of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int c = 0;

	while (c < n)
	{
		printf("%d", a[c]);
		if (c != (n - 1))
		{
			printf(", ");
		}
		c++;
	}
	printf("\n");
}


