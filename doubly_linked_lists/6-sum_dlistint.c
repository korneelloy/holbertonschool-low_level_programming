#include "lists.h"

/**
 * sum_dlistint - sum of all elements of a list
 * @head: pointer to a list
 *
 * Return: the sum of the elements
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int result = 0;

	if (head != NULL)
		for (current = head; current != NULL; current = current->next)
			result += current->n;
	return (result);
}
