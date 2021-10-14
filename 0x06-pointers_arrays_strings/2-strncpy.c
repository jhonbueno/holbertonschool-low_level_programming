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
	int i, k;

	i = 0;
	k = 0;

	while (src[i] != '\0')
		i++;

	if (n > i)
		n = i;
	while (k < n && n > 0)
	{
		dest[k] = src[k];
		k++;
	}

	return (dest);
}
