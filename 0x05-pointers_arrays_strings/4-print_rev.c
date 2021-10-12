#include "main.h"

/**
 * _puts - print string
 * @s: Char
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i, strl;

	strl = _strlen(strl);

	for (i = strl; i  >=  0; i--)

		_putchar(s[i]);

	_putchar('\n');
}
