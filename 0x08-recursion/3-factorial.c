#include "main.h"

/**
 * factorial - puts reverse
 * @n: int
 *
 *
 * Return: integer
 */

int factorial(int n)
{
	int fact = 1;

	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
}
