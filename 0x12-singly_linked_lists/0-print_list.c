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

	for (; h != NULL; h = h->next)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		nodes++;
	}

	return (nodes);
}
