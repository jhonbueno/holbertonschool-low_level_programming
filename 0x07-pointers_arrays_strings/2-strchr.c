#include "main.h"

/**
 * _strchr - copies memory area
 * @s: char
 * @c: char
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
			return (s = &s[j]);
	}
	if (s[0] == '\0')
		s = &s[0];

	return (s);
}
