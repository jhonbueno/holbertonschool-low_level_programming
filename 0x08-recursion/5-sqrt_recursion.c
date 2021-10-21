#include "main.h"

/**
 * sqrt2 - square root
 * @n: int
 * @i: int
 *
 *
 * Return: integer
 */

int sqrt2(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (sqrt2(n, i + 1));
}

/**
 * _sqrt_recursion - call sqrt function
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt2(n, 1));
}
