#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize dog
 * @d: dog
 *
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
