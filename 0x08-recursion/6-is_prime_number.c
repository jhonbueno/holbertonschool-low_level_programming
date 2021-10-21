#include "main.h"

/**
 * is_prime - is prime
 * @n: int
 * @i: int
 *
 *
 * Return: integer
 */

int is_prime(int n, int i)
{
	if (n % i == 0 && i != n)
	{
		return (0);
	}
	else if (n % i != 0)
	{
		return (is_prime(n, i + 1));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - call is_prime function
 * @n: int
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1)
	{
		return (0);
	}

	return (is_prime(n, 2));
}
