#include "main.h"

/**
 * print_last_digit - Print last digit
 * @n: parameter n
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n > 0)
		n = -n;

	int last_digit;

	last_digit = n % 10;

	return (last_digit);
}
