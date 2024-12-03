#include <stdio.h>
#include "lists.h"
#include <string.h>

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
	char *string = strdup(str);
	int i = 0, length = 0;

	for (i = 0; string[i]; i++)
		continue;
	length = i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = malloc(length * sizeof(char) + 1);
	if (new_node->str == NULL)
		return (NULL);
	strcpy(new_node->str, string);

	new_node->len = length;

	free(string);

	new_node->next = *head;

	*head = new_node;

	if (head == NULL)
		return (NULL);

	return (*head);
}
