#include "main.h"

/**
 * printname - print the name of the program
 *
 * @argc: int
 * @argv: char
 *
 * Return: 0
 */

printname(int argc, char *argv[])
{
	int i;

	i = 0;

	while (argc > 0)
	{
		printf("%s\n", argv[i]);
		argc--;
	}
}
