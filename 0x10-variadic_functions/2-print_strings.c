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

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (!va_arg(ap, char*))
			printf("(nil)");
		else
			printf("%s", va_arg(ap, char*));

		if (i < n - 1 && separator)
			printf("%s", separator);

	}
	printf("\n");


	va_end(ap);
}
