#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int row = 0;
	int col = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (row <= (size * size))
	{
		sum1 += a[row];
		row = row + size + 1;
	}
	while (col <= (size * size - 1))
	{
		sum2 += a[col];
		col = col + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
