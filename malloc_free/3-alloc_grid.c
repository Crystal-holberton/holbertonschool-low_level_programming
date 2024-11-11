#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2
 * dimensional array of integers
 * @width: array width
 * @height: array height
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **a;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (--i; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
		i++;
	}
	while (i < height && j < width)
	{
		a[i][j] = 0;
		i++;
		j++;
	}
	return (a);
}
