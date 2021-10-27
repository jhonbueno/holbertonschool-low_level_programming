#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate string
 * @s1: char
 * @s2: char
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1, len2, i, j, k;

	k = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);

	s = malloc(sizeof(char) + 1 * (len1 + len2));

	if (s == NULL)
		return (NULL);
	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';
	if (s1 == NULL && s2 == NULL)
		s[0] = '\0';
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (j = len1; j < (len1 + len2); j++)
	{
		s[j] = s2[k];
		k++;
	}
	s[j] = '\0';
	return (s);
}
