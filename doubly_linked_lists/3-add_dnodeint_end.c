#include "lists.h"

/**
 * add_dnodeint_end - adds a new note at the end of a list
 * @head: double pointer to head node
 * @n: int to be added
 *
 * Return: pointer to new element, or NULL if it failed
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = NULL;


	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		for (current = *head; current->next != NULL; current = current->next)
			continue;
		new_node->prev = current;
		current->next = new_node;
	}
	return (new_node);
}
