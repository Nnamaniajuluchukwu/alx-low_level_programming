#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize the struct dog params.
 *
 * @d: pointer to the struct.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *new;

	new = d;

	new->name = name;
	new->age = age;
	new->owner = owner;
}
