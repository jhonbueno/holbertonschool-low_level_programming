#include "main.h"

/**
 * _strpbrk - copies memory area
 * @s: char
 * @accept: char
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	b = needle;

	if (*b == 0)
	{
		return (haystack);
	}

	for ( ; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
		{
			continue;
		}
		a = haystack;

		while (1)
		{
			if (*b == 0)
			{
				return haystack;
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return NULL;
}
