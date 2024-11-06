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
	int col = 1;
	int sum1 = 0;
	int sum2 = 0;

	while (row < size)
	{
		sum1 = sum1 + a[(size + 1) * row];
		sum2 = sum2 + a[(size - 1) * col];
		col++;
		row++;
	}
	printf("%d, %d\n", sum1, sum2);
}
