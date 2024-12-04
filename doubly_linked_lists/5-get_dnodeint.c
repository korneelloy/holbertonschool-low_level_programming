#include "lists.h"


/**
 * get_dnodeint_at_index - searching for node at given index
 * @head: pointer to list
 * @index: index of node
 *
 * Return: node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int i = 0;

	for (current = head; current->next != NULL; current = current->next)
	{
		if (i == index)
			return (current);
		i++;
	}
	return (NULL);
}
