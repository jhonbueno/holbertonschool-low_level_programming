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
	int i;

	i = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (*s = c);
		i++;
	}
	if (*s != c)
		return (0);
	return (0);
}
