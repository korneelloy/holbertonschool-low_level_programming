#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the allocated space
 * @d: pointer towards a dog
 *
 * Return: no return
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
