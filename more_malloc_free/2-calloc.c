#include <stdlib.h>

/**
 * _calloc - allocate memeory and initilalise at 0
 * @nmemb: number of elements
 * @size: bytes per element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer = NULL;
	unsigned int i;
	void *void_pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		pointer[i] = 0;
	void_pointer = (void *)pointer;
	return (void_pointer);
}
