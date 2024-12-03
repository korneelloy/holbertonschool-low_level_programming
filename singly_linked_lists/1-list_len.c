#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the length of a lsit
 * @h: list
 *
 * Return: length OF STRING
 */

size_t list_len(const list_t *h)
{
	list_t *current;
	int i = 0;

	for (current = (list_t *)h; current != NULL; current = current->next)
		i++;
	return (i);
}
