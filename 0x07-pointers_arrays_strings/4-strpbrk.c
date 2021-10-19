#include "main.h"

/**
 * _strpbrk - copies memory area
 * @s: char
 * @accept: char
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, k, l;
	char *p;

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
			p = &s[j];
			break;
		}
		else
			p = NULL;
	}
	return (p);
}
