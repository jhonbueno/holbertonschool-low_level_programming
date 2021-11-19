#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int b = n;
	int i = 0;

	if (n == 0)
		_putchar('0');

	while (b > 0)
	{
		b >>= 1;
		i++;
	}

	i--;

	while (i >= 0)
	{
		if (1 & (n >> i))
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
