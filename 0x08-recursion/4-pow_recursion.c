#include "main.h"

/**
 * _pow_recursion - puts reverse
 * @x: int
 * @y: int
 *
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	int power = 1;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	power = x * _pow_recursion(x, (y - 1));
		return (power);
}
