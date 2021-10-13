#include "main.h"

/**
 * _strcpy - print string
 * @dest: char
 * @src: char
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = _strlen(src)

	while (i <= j)
	{
		dest[i] = src[i];
		i++;
	}

	return (*dest);
}
