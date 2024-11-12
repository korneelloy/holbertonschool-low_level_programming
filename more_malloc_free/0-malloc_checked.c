#include <stdlib.h>

/**
 * malloc_checked - allocate space dynamically
 * @b: number of bytes to be allocated
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer = NULL;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
