#include "main.h"

/**
 * _strsnp - copies memory area
 * @s: char
 * @accept: char
 *
 * Return: char
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, count;

	i = 0;
	count = 0;

	while (accept[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		for (k = 0; k <= i; j++)
		{
			if (accept[j] == s[k])
				count++;
		}
	}
	return (count);
}
