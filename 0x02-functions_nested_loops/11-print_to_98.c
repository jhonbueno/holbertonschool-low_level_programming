#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print numbers between n and 98
 * @n: Number
 *
 */

void print_to_98(int n)
{
	int num;

	if (n == 98)
		printf("%d", n);

	else if (n > 98)
	{
		for (num = n; num >= 98; num--)
		{
			printf("%d", num);
			if (num > 98)
				printf(", ");
		}
	}

	else
	{
		for (num = n; n <= 98; num++)
		{
			printf("%d", num);
			if (num < 98)
				printf(", ");
		}
	}
	printf("\n");
}
