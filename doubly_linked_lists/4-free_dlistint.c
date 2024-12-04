#include "lists.h"

/**
 * free_dlistint - free memeory allocation of a list
 * @head: pointer to the list
 *
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
