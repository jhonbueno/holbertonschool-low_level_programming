#include "main.h"

/**
 * _strspn - copies memory area
 * @s: char
 * @accept: char
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, k, l;

	i = 0;
	l = 0;

	while (accept[i] != '\0')
		i++;
	while (s[l] != '\0')
		l++;

	for (j = 0; j < l; j++)
	{
		for (k = 0; k < i; k++)
		{
			if (s[j] == accept[k])
			{
				break;
			}
		}

		if (s[j] == accept[k])
		{
			s = &s[j];
			break;
		}
	}
	return (s);
}
