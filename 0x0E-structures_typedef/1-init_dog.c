#include "dog.h"

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
	struct dog *p;

	p = d;

	p->name = name;
	p->age = age;
	p->owner = owner;
}
