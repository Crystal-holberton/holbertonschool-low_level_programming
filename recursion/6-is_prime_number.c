#include "main.h"

int check_prime_number(int n, int i);

/**
 * is_prime_number - checks the integer is a prime number
 * @n: the number being checked
 * Return: 1 if the input integer is a prime number,
 *  otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime_number(n, n - 1));
}

/**
 * check_prime_number - calculate prime number recursively
 * @n: number being checked
 * @i: iterator
 * Return: 1 for prime, otherwise 0
 */

int check_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (check_prime_number(n, i - 1));
}
