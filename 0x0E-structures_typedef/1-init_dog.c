#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
