#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main function
 *
 *
 * Return: 0
 */

int main(void)
{
	int n;

	int last_digit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_digit = n % 10;


	if (last_digit > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	}

	else if (last_digit == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}

	return (0);
}
