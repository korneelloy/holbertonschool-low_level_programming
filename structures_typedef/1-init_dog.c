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
	/**
	*d->name = malloc(sizeof(name));
	if (d->name == NULL)
		return (NULL);
	d->owner = malloc(sizeof(owner));
	if (d->owner == NULL)
		return (NULL);
	*/

	struct dog **ptr = NULL;

	ptr = malloc(3 * sizeof(struct dog *));
	ptr[0] = malloc(sizeof(name));
	ptr[1] = malloc(sizeof(age));
	ptr[2] = malloc(sizeof(owner));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
