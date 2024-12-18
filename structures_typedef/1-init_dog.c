#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initlialize a new dog
 * @d: pointer to new dog
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
