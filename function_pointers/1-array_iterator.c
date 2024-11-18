#include <stdlib.h>

/**
 * array_iterator - execute given function on each el of a given array
 * @array: given (pointer to) array
 * @size: size of array
 * @action: (pointer to) given function (with int as parameter, void as return)
 *
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || size < 1 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
