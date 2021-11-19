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
	unsigned int i, l, dec;
	int j, k = 0;

	dec = 0;
	l = 0;

	if (!b)
		return (0);

	while (b[l])
		l++;
	for (i = 0; i < l; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (j = l - 1; j >= 0; j--)
	{
		if (b[j] == '0')
			dec = dec + 0;
		else
			dec = dec + (_pow_recursion(2, k));
		k++;
	}

	return (dec);

}
