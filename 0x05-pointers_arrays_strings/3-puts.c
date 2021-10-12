#include "main.h"

/**
 * _puts - print string
 * @s: Char
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
