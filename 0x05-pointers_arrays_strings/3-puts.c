#include "main.h"

/**
 * _puts - print string
 * @s: Char
 *
 * Return: 0
 */

void _put(char *str)
{
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
