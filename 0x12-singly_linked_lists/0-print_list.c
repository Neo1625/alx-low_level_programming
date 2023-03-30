#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - Function that prints all elements of a list_t linked list
 * @h: pointer to start of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;
	struct list_t *current = NULL

	if (h == NULL)
	{
		return (0);
	}

	for (current = h; current != NULL; current = current->next)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		nodes++;
	}

	return (nodes);
}
