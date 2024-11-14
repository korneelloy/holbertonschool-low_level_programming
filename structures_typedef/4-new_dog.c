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

	ptr = malloc(sizeof(dog_t *) * 2 + sizeof(float));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(nom));
	if (ptr->name == NULL)
		return (NULL);
	ptr->owner = malloc(sizeof(prop));
	if (ptr->owner == NULL)
		return (NULL);

	ptr->name = nom;
	ptr->age = age;
	ptr->owner = prop;

	return (ptr);
}
