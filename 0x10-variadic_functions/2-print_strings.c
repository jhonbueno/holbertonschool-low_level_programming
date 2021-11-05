#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_strings - print numbers
 * @separator: char
 * @n: number
 *
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *p;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char*);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");


	va_end(ap);
}
