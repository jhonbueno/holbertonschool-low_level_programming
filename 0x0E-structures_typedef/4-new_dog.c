#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - print dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;
	return (dog1);
}
