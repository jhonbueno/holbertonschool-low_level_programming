#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - dog structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
