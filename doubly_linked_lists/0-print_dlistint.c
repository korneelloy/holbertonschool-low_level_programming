#include "lists.h"

/**
 * print_dlistint - print all the elements of a lits
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = NULL;
	int i = 0;

	for (current = (dlistint_t *)h; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
		i++;
	}
	return (i);
}
