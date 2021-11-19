#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


/**
 * binary_to_uint - convert binary to unsigned int
 *
 * @b: string with 0 and 1
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int i, j, mod, dec;

	dec = 0;

	if (b == NULL)
		return (0);

	for (i = 0; i < strlen(b); i++)
	{
		if (!isdigit(b[i]))
			return (0);
	}

	number = atoi(b);

	for (j = 0; j < strlen(b); j++)
	{
		mod = number % 10;
		dec = dec + (pow(2, j) * mod);
		number = number / 10;
	}

	return (dec);

}
