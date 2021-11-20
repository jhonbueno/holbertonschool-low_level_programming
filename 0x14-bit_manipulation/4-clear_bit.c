#include "main.h"

/**
 * clear_bit - set bit
 *
 * @n: integer number
 * @index: index
 *
 * Return: integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n = (0 << index) | *n;

	return (1);
}
