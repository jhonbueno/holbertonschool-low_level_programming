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

	char caso[50];

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_digit = n % 10;


	    switch (n)
	    {
		case n > 5:
			caso = "and is greater than 5";

		case n == 0:
			caso = "and is 0";

		case n < 6 && n != 0:
			caso = "and is less than 6 and not 0";

	    }

	    printf("Last digit of %d %s", n, caso);

	    return (0);
}
