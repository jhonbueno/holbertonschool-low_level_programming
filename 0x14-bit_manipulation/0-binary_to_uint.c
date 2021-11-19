#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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


/**
 * binary_to_uint - convert binary to unsigned int
 *
 * @b: string with 0 and 1
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec, len;
	int l, j, k = 0;

	dec = 0;

	if (b == NULL)
		return (0);

	while(b[l] != '0')
		l++;
	for (i = 0; i < l; i++)
	{
		if (!isdigit(b[i]))
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
