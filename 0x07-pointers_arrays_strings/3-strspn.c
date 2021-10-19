#include "main.h"

/**
 * _strspn - copies memory area
 * @s: char
 * @accept: char
 *
 * Return: char
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, l, flag;
	unsigned int count;

	i = 0;
	l = 0;
	count = 0;
	flag = 1;

	while (accept[i] != '\0')
		i++;
	while (s[l] != '\0')
		l++;

	for (j = 0; j < l && flag == 1; j++)
	{
		for (k = 0; k <= i; k++)
		{
			if (S[j] == accept[k])
			{
				count++;
				flag =1;
				break;
			}
		}
		else
			flag = 0;
	}
	return (count);
}
