#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a number in a list
 * @h: double pointer to list
 * @idx: index where to add
 * @n: nimber to be addes
 *
 * Return: pointer to new node or NULL if faile
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *new_node = NULL;
	unsigned int i = 0;
	/**  if list empty, add, but only if index given is 0 */
	if (*h == NULL)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		else
			return (NULL);
	}

	for (current = *h; current != NULL; current = current->next)
	{
		if (i == idx)
			break;
		i++;
	}
	/** if index 0, call add at beginning*/
	if (i == 0)
		return (add_dnodeint(h, n));
	/** if index at last node, call add at end*/
	else if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	/** else add in middle if index is not greater than lenght list */
	else if (i < idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current;
	new_node->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = new_node;
	current->prev = new_node;
	return (new_node);
}
