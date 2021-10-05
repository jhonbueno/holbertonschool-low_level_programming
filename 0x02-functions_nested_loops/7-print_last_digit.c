#include "main.h"

/**
 * print_last_digit - Print last digit
 * @n: parameter n
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	return (last_digit);
}
