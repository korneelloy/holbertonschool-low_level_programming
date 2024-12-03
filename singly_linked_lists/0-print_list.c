#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - print elements of a list
 * @h : list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	list_t *current = (list_t *)h;
	char *str = NULL;
	int i = 0;

	while (current != NULL)
	{
		str = current->str;

		if (str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		i++;
	}
	return (i);
}
