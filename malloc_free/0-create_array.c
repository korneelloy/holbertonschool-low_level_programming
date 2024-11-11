#include <stdlib.h>
/**
 * create_array - create an array of char and allocate memory
 * @size: size of array
 * @c: first character of array
 * Return: a pointer to the first char of the array
 */


char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (array == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
