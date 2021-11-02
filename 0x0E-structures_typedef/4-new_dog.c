#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - print dog
 * @d: dog
 *
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *dog1;

	dog1 = malloc(sizeof(struct dog_t));
	if (dog1 == NULL)
		return (NULL);
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;
	return (dog1);
}
