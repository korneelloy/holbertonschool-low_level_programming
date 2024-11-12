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
	void *pointer = NULL;
	unsigned int i;
	unsigned char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	x = (unsigned char *)pointer;
	for (i = 0; i < (nmemb * size); i++)
		x[i] = 0;
	return (pointer);
}
