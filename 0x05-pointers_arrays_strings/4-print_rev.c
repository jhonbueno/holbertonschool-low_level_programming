#include "main.h"

/**
 * print_rev - print string
 * @s: Char
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i; j  >=  0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
