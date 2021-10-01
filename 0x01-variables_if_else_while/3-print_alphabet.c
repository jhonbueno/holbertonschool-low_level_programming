#include <stdio.h>
/**
 * main - Main function
 *
 * Return: return 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);

	for (c = 'A'; c <= 'A'; ++c)
		putchar(c);

	printf("\n");

	return (0);
}
