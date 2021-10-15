#include "main.h"

/**
 * _strncpy - print string
 * @dest: char
 * @src: char
 * @n: n
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (src[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];

		if (j > i)
		{
			dest[j] = '\0';
		}
	}
	return (dest);
}
