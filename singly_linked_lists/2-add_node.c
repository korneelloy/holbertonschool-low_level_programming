#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node to beginning of a list
 * @head: double pointer to list
 * @str: the string to be added
 *
 * Return: new head pointer or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (length = 0; new_node->str[length]; length++)
		continue;

	new_node->len = length;

	new_node->next = *head;

	*head = new_node;

	return (*head);
}
