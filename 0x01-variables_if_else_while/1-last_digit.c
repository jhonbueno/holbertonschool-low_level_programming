#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int last_digit = n % 10;
	string caso;

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
