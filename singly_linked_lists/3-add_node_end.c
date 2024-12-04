#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node to end of a list
 * @head: double pointer to list
 * @str: the string to be added
 *
 * Return: pointer to new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	int length = 0;
	list_t *current = NULL;

	/**create new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/** set name */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/** set length */
	for (length = 0; new_node->str[length]; length++)
		continue;

	new_node->len = length;

	/** set pointer to NULL, because it's the last element in the list */
	new_node->next = NULL;

	/** if list is empty */
	if (*head == NULL)
		*head = new_node;
	else
	{
		/** go to current last element */
		for (current = *head; current->next != NULL; current = current->next)
			continue;
		/** replace NULL pointer of current last element with */
		/** pointer to newly created element */
		current->next = new_node;
	}
	return (new_node);
}
