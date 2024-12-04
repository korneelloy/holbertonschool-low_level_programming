#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current = NULL;
	int i = 0;

	for (current = (dlistint_t *)h; current != NULL; current = current->next)
		i++;
	return (i);
}
