#include "dog.h"

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
	d.name = name;
	d.age = age;
	d.owoner = owner;

	return (0);
}
