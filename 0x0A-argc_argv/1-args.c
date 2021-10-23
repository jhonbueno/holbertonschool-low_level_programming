#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - print the name of the program
 *
 * @argc: int
 * @argv: char
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, count;

	count = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i])
			count++;
	}
	printf("%d\n", count);
	return (0);
}
