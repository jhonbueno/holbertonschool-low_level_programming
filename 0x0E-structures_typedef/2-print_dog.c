#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print dog
 * @d: dog
 *
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
	else
		putchar('\0');
}
