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
	char *ptr = accept;

	for (; *s != '\0'; s++)
	{
		for (accept = ptr; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
	}
	return (0);
}
