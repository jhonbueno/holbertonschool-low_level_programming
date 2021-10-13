#include "main.h"
#include <stdio.h>

/**
 * print_array - print string
 * @str: Char
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (i = 0; i <= n; i++)
	{
		_putchar(a[i]);
		if (i < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
