#include "main.h"

/**
 * _strncat - print string
 * @dest: char
 * @src: char
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	j = 0;
	k = 0;

	while (dest[j] != '\0')
		j++;

	while (k <= n)
	{
		dest[j + k] = src[k];
		k++;
	}

	return (dest);
}
