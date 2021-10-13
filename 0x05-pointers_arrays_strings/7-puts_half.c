#include "main.h"

/**
 * puts_half - print string
 * @str: Char
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = (((i - 1) / 2) + 1); j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
