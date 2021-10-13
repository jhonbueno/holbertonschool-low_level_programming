#include "main.h"
#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 0;
	printf("Should print 0: %d", positive_or_negative(i));
        positive_or_negative(i);

        return (0);
}
