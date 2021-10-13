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
	j = 0;

	while (src[i] != '\0')
		i++;

	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
