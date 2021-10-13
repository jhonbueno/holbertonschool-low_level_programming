#include "main.h"

/**
 * puts2 - print string
 * @str: Char
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	i = 1;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
