#include "main.h"

/**
 * _print_rev_recursion - puts reverse
 * @s: char
 *
 *
 * Return: 0
 */

void _print_rev__recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
