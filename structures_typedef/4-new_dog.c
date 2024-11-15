#include <stdlib.h>
#include "dog.h"

/**
 * size_of_string - compteur nombre de char dans tsring + 1 pour null byte
 * @s: string
 *
 * Return: size
 */

int size_of_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i++);
}

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
	dog_t *ptr = NULL;
	int i = 0, size_name = 0, size_owner = 0;

	size_name = size_of_string(name);
	size_owner = size_of_string(owner);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(size_name);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(size_owner);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	for (i = 0; i <= size_name; i++)
		ptr->name[i] = name[i];
	for (i = 0; i <= size_owner; i++)
		ptr->owner[i] = owner[i];
	return (ptr);
}
