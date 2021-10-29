#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * check_digit - Check if there is not digit
 *
 * @a: array
 *
 * Return: integer
 */

int check_digit(char a[])
{
	int i, len;

	len = strlen(a);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(a[i]))
		{
			return (0);
		}
	}
	return (1);
}
