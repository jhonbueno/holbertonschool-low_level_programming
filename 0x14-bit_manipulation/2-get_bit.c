#include "main.h"

/**
 * get_bit - get bit
 *
 * @n: integer number
 * @index: index
 *
 * Return: none
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (!n || !index)
		return (-1);

	index--;

	if (1 & (n >> index))
		b = 1;
	else
		b = 0;

	return (b);
}
