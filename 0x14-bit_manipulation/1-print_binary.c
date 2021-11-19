#include "main.h"

/**
 * print_binary - print binary
 *
 * @n: integer number
 *
 * Return: unsigned integer
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin = 0;

	if (n == 0)
		return;
	else
	{
		bin = n % 2;
		print_binary(n / 2);
		_putchar(bin);
	}
}
