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

	for (; s[i] != '\0'; s++)
	{
		if (s[i] == c)
			return (s = &s[i]);
		i++;
	}
	if (s[i] != c)
		return (0);
	return (0);
}
