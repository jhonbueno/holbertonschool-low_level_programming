#include "main.h"

/**
 * _puts - print string
 * @s: Char
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i, len;
	char strl[] = s;

	len = _strlen(strl);

	for (i = len; i  >=  0; i--)

		_putchar(s[i]);

	_putchar('\n');
}
