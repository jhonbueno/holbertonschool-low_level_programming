#include "main.h"

/**
 * recursive_binary - recursive binary calculus
 * @n: The number given
 * @b: initial state of n
 *
 * Return: none
 *
 */

void recursive_binary(unsigned long int n, unsigned long int b)
{
	unsigned long int bin = 0;

	if (b == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 0)
		return;

	bin = n % 2;
	recursive_binary(n / 2, b);
	_putchar(bin + '0');
}

/**
 * print_binary - print binary
 *
 * @n: integer number
 *
 * Return: unsigned integer
 */

void print_binary(unsigned long int n)
{
	unsigned long int b = n;

	recursive_binary(n, b);
}
