#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creating a new dog
 * @name: nom
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;
	dog_t *ptr = &my_dog;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
