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
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s != c)
		return (0);

	return (0);
}
