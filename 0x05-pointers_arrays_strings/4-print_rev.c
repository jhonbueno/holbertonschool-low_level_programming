#include "main.h"

/**
 * _puts - print string
 * @s: Char
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	for (i = (_strlen(s) + 1); i  >=  0; i--)

		_putchar(s[i]);

	_putchar('\n');
}
