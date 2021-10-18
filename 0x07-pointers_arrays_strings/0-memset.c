#include "main.h"

/**
 * _memset -fills n bytes with b
 * @s: char
 * @b: char
 * @n: unsigned int
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
