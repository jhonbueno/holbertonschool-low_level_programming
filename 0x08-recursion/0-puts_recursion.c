#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - puts recursion
 * @s: char
 *
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	ini i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
