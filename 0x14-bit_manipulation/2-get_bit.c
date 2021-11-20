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

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	b = 1 & (n >> index);
	return (b);
}
