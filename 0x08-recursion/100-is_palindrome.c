#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * palindrome - recursive function
 * @s: s
 * @b: s
 * @half: int
 *
 *
 * Return: integer
 */

int palindrome(char *s, char *b, int half)
{
	if (*s != *b)
	{
		return (0);
	}
	else if (half == 0)
	{
		return (1);
	}
	return (palindrome(s + 1 , b - 1, half - 1));
}

/**
 * is_palindrome - function call the recursive
 * @s: char
 *
 * Return: int
 */

int is_palindrome(int n)
{
	int half;
	char *b = s;

	half = strlen(s) / 2;
	b = &s[strlen(s) - 1];

	return (palindrome(s, b, half));
}
