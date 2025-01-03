#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: number being computed
 * Return: absolute value of number otherwise zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
