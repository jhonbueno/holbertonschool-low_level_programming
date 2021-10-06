#include "main.h"

/**
 * print_times_table - Print n times table
 * @n: number for table
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int r, c, m, d1, d2, d3;

	if (n <= 15 && n >= 0)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				m = r * c;
				d1 = m / 100;
				d2 = (m / 10) % 10;
				d3 = m % 10;

				if (m == d3)
					_putchar(m + '0');

				else if (m == d2)
				{
					_putchar((m / 10) + '0');
					_putchar(d3 + '0');
				}
				else
				{
					_putchar(d1 + '0');
					_putchar(d2 + '0');
					_putchar(d3 + '0');
				}
				if (c < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					if ((r * (c + 1)) < 10)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

}
