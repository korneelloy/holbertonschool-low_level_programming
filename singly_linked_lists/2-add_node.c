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

	if (string == NULL)
		return (NULL);

	for (i = 0; string[i]; i++)
		continue;
	length = i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(string);
		return (NULL);
	}
	new_node->str = malloc((length + 1) * sizeof(char));
	if (new_node->str == NULL)
	{
		free(string);
		free(new_node);
		return (NULL);
	}
	strcpy(new_node->str, string);

	new_node->len = length;

	free(string);

	new_node->next = *head;

	*head = new_node;

	printf("%p\n", (void *)*head);

	return (*head);
}
