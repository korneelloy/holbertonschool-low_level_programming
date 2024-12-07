#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a number in a list
 * @h: double pointer to list
 * @idx: index where to add
 * @n: number to be addes
 *
 * Return: pointer to new node or NULL if faile
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *new_node = NULL;
	unsigned int i = 0, lenght = 0;
	/**  if list empty, add, but only if index given is 0 */
	if (*h == NULL)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		else
			return (NULL);
	}

	for (current = *h; current != NULL; current = current->next)
		lenght++;

	for (current = *h; current != NULL; current = current->next)
	{
		if (i == idx)
			break;
		i++;
	}
	/** if index en dehors de la liste */
	if (i < idx)
		return (NULL);
	/** if index 0, call add at beginning*/
	else if (i == 0)
		return (add_dnodeint(h, n));
	/** if index at last node, call add at end */
	else if (idx == lenght)
		return (add_dnodeint_end(h, n));
	/** else add in middle */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current;
	new_node->prev = current->prev;
	current->prev->next = new_node;
	current->prev = new_node;

	return (new_node);
}
