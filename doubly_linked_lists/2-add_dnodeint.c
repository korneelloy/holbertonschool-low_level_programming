#include "lists.h"

/**
 * add_dnodeint - adds a new note at the beginning of a list
 * @head: double pointer to head node
 * @n: int to be added
 *
 * Return: pointer to new element, or NULL if it failed
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
