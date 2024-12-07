#include "lists.h"

/**
 * delete_dnodeint_at_index - delete an item
 * @head: double pointer to list
 * @index: index of item to be deleted
 *
 * Return: 1 if succes / -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *counter = NULL;
	unsigned int i = 0, lenght = 0;

	for (counter = *head; counter != NULL; counter = counter->next)
		lenght++;
	if (*head == NULL || index >= lenght)
		return (-1);

	for (current = *head; current != NULL; current = current->next)
	{
		if (i == index)
			break;
		i++;
	}
	if (i == 0)
	{
		if (current->next)
		{
			current->next->prev = NULL;
			*head = current->next;
		}
		else
			*head = NULL;
	}
	else if (index == lenght - 1)
	{
		if (current->prev)
			current->prev->next = NULL;
	}
	else
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
