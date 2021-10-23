#include "main.h"
#include <string.h>

/**
 * wildstr - recursive function
 * @s1: char
 * @s2: char
 * @len2: int
 *
 * Return: int
 */

int wildstr(char *s1, char *s2, int len2)
{
	if ((len2 == 0 && *s1 == *s2) || (len2 == 0 && *s2 == '*')
	    || (len2 == 0 && *(s2 + 1) == '*'))
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildstr(s1 - 1, s2 - 1, len2 - 1));
	}
	if (*s2 == '*')
	{
		return (wildstr(s1, s2 - 1, len2 - 1));
	}
	if ((*s1 != *s2 && *(s1 + 1) == *(s2 + 1) && *(s2 + 1) != '\0')
	    || (*s1 != *s2 && *(s2 + 1) == '*'))
	{
		return (wildstr(s1 - 1, s2, len2 - 1));
	}
	if (s2 == &s2[strlen(s2) - 1] && *s1 != *s2)
	{
		return (0);
	}
	return (0);
}


/**
 * wildcmp - wildcomparison
 * @s1: s
 * @s2: s
 *
 *
 * Return: integer
 */

int wildcmp(char *s1, char *s2)
{
	int last1, last2, len2;
	char *a = s1;
	char *b = s2;

	len2 = strlen(s2) - 1;
	last1 = strlen(s1) - 1;
	last2 = strlen(s2) - 1;

	a = &s1[last1];
	b = &s2[last2];

	return (wildstr(a, b, len2));
}
