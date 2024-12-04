#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees all the memory of the list
 * @head : pointer to the list
 *
 * Return: no return
 */

void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_list(head->next);
	free(head->str);
	free(head);
}
