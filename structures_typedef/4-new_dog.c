#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

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
	dog_t *ptr = NULL;
	char *nom = name;
	char *prop = owner;

	ptr = &my_dog;
	ptr = malloc(sizeof(nom) + sizeof(float) + sizeof(prop));
	if (ptr == NULL)
		return (NULL);

	ptr->name = nom;
	ptr->age = age;
	ptr->owner = prop;

	if (ptr == NULL || ptr->name == NULL || ptr->owner == NULL)
		return (NULL);
	return (ptr);
}
