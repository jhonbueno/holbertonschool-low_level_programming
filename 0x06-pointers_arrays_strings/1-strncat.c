#include "main.h"

/**
 * _strncat - print string
 * @dest: char
 * @src: char
 * @n: n
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while (src[i] != '\0')
		i++;

	while (dest[j] != '\0')
		j++;

	if (n > i)
		n = i;
	while (k <= n)
	{
		dest[j + k] = src[k];
		k++;
	}

	return (dest);
}
