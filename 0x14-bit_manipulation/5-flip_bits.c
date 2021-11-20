#include "main.h"

/**
 * flip_bits - flip bit
 *
 * @n: integer number
 * @m: index
 *
 * Return: integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xo;
	int i = 0;

	xo = n ^ m;

	while (xo > 0)
	{
		if ((xo & 1) == 1)
			i++;

		xo = xo >> 1;
	}

	return (i);
}
